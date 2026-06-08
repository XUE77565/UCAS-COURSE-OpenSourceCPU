#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <string.h>
#include <sys/time.h>

// Verilator 头文件
#include "Vcustom_cpu.h"
#include "verilated.h"

// 内存配置
#define PMEM_START 0x80000000u
#define PMEM_SIZE  (128 * 1024 * 1024)  // 128MB

// MMIO 地址
#define SERIAL_MMIO 0xa00003f8u
#define TIMER_MMIO  0xa0000048u

// 物理内存
static uint8_t pmem[PMEM_SIZE];

// 全局仿真顶层指针, 供 DPI-C 回调函数访问 CPU 内部信号
static Vcustom_cpu *g_top = nullptr;

// 将客户物理地址转换为主机地址
static inline uint8_t* guest_to_host(uint32_t addr) {
  return &pmem[addr - PMEM_START];
}

// 判断地址是否在物理内存范围内
static inline bool in_pmem(uint32_t addr) {
  return (addr >= PMEM_START) && (addr < PMEM_START + PMEM_SIZE);
}

// 加载二进制文件到物理内存
extern "C" void load_binary(const char *bin_path) {
  FILE *fp = fopen(bin_path, "rb");
  if (!fp) {
    fprintf(stderr, "Cannot open binary file: %s\n", bin_path);
    exit(1);
  }
  fseek(fp, 0, SEEK_END);
  long size = ftell(fp);
  fseek(fp, 0, SEEK_SET);

  if (size > PMEM_SIZE) {
    fprintf(stderr, "Binary file too large: %ld bytes\n", size);
    fclose(fp);
    exit(1);
  }

  fread(pmem, 1, size, fp);
  fclose(fp);
  printf("Loaded %ld bytes from %s into pmem\n", size, bin_path);
}

// ebreak 回调, 由 wb.v 通过 DPI-C 调用, 当 ebreak 指令到达 WB 阶段时触发
// 通过顶层模块的 a0_out 端口读取 a0 寄存器(x10)的值作为退出码
extern "C" void set_ebreak() {
  int code = g_top ? (int)(uint32_t)g_top->a0_out : 1;
  printf("ebreak: program has finished with exit code %d\n", code);
  exit(code);
}

// 从物理地址读取 4 字节, 由 mem.v 通过 DPI-C 调用
// 总是读取地址为 raddr & ~0x3u 的 4 字节并返回
extern "C" int pmem_read(int raddr) {
  uint32_t addr = (uint32_t)(raddr & ~0x3u);

  // 时钟 MMIO: 返回当前时间(微秒)
  if (addr == TIMER_MMIO || addr == TIMER_MMIO + 4) {
    struct timeval tv;
    gettimeofday(&tv, NULL);
    uint64_t us = (uint64_t)tv.tv_sec * 1000000 + tv.tv_usec;
    if (addr == TIMER_MMIO) {
      return (int)(uint32_t)(us & 0xFFFFFFFF);
    } else {
      return (int)(uint32_t)(us >> 32);
    }
  }

  // 普通内存读取
  if (in_pmem(addr)) {
    return *(int32_t *)guest_to_host(addr);
  } else {
    fprintf(stderr, "Invalid memory read at address: 0x%08x\n", addr);
    exit(1);
  }

  return 0;
}

// 向物理地址写入, 由 mem.v 通过 DPI-C 调用
// 总是往地址为 waddr & ~0x3u 的 4 字节按掩码 wmask 写入 wdata
// wmask 中每比特表示 wdata 中 1 个字节的掩码
extern "C" void pmem_write(int waddr, int wdata, char wmask) {
  uint32_t addr = (uint32_t)(waddr & ~0x3u);

  // 串口 MMIO: 输出字符
  if (addr == SERIAL_MMIO) {
    putchar(wdata);
    fflush(stdout);
    return;
  }

  // 普通内存写入, 按字节掩码写入
  if (in_pmem(addr)) {
    uint8_t *p = guest_to_host(addr);
    uint8_t *data_bytes = (uint8_t *)&wdata;
    for (int i = 0; i < 4; i++) {
      if (wmask & (1 << i)) {
        p[i] = data_bytes[i];
      }
    }
  } else {
    fprintf(stderr, "Invalid memory write at address: 0x%08x\n", addr);
    exit(1);
  }
}

int main(int argc, char *argv[]) {
  if (argc < 2) {
    fprintf(stderr, "Usage: %s <binary>\n", argv[0]);
    return 1;
  }

  // 加载二进制文件到物理内存
  load_binary(argv[1]);

  // 初始化 Verilator
  Verilated::commandArgs(argc, argv);
  auto *top = new Vcustom_cpu;
  g_top = top;

  // 初始化输入信号
  top->rst = 1;
  top->clk = 0;
  // 取指握手: 内存始终就绪, 指令始终有效 (DPI-C pmem_read 是即时返回的)
  top->Inst_Req_Ready = 1;
  top->Inst_Valid = 1;
  top->Instruction = 0;
  // 数据内存握手: 数据内存通过 DPI-C 在 mem.v 中直接处理, 这些信号置默认值
  top->Mem_Req_Ready = 1;
  top->Read_data = 0;
  top->Read_data_Valid = 0;
  // 中断: cpu-tests 不使用中断
  top->intr = 0;
  top->eval();

  // 复位若干周期, 确保 IF 阶段 PC 初始化到 0x80000000
  for (int i = 0; i < 10; i++) {
    top->clk = 1;
    top->eval();
    top->clk = 0;
    top->eval();
  }

  // 释放复位信号, CPU 开始执行
  top->rst = 0;

  // 主仿真循环
  const uint64_t MAX_CYCLES = 100000000ULL;  // 安全上限: 1 亿周期
  uint64_t cycle = 0;

  while (!Verilated::gotFinish() && cycle < MAX_CYCLES) {
    // 根据 CPU 输出的 PC 从内存中读取指令, 提供给取指接口
    top->Instruction = pmem_read(top->PC);

    // 上升沿: 触发 posedge clk 时序逻辑
    top->clk = 1;
    top->eval();
    cycle++;

    // 下降沿: 组合逻辑稳定
    top->clk = 0;
    top->eval();
  }

  if (cycle >= MAX_CYCLES) {
    fprintf(stderr, "Simulation exceeded maximum cycle count (%lu)\n",
            (unsigned long)MAX_CYCLES);
    delete top;
    return 1;
  }

  delete top;
  return 0;
}
