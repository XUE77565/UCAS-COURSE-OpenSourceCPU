#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <string.h>
#include <sys/time.h>

// 内存配置
#define PMEM_START 0x80000000u
#define PMEM_SIZE  (128 * 1024 * 1024)  // 128MB

// MMIO地址
#define SERIAL_MMIO 0xa00003f8u
#define TIMER_MMIO  0xa0000048u

// 物理内存
static uint8_t pmem[PMEM_SIZE];

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

// ebreak回调, 结束仿真
extern "C" void set_ebreak() {
  printf("ebreak: program has finished. SUCCESS\n");
  exit(0);
}

// 从物理地址读取4字节
// 总是读取地址为 raddr & ~0x3u 的4字节并返回
extern "C" int pmem_read(int raddr) {
  uint32_t addr = (uint32_t)(raddr & ~0x3u);
  printf("pmem_read: addr = 0x%08x\n", addr);

  // 时钟MMIO: 返回当前时间(微秒)
  if (addr == TIMER_MMIO || addr == TIMER_MMIO + 4) {
    printf("Reading from timer MMIO at address: 0x%08x\n", addr);
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
  }
  else {
    fprintf(stderr, "Invalid memory read at address: 0x%08x\n", addr);
    exit(1);
  }

  return 0;
}

// 向物理地址写入
// 总是往地址为 waddr & ~0x3u 的4字节按掩码 wmask 写入 wdata
// wmask 中每比特表示 wdata 中1个字节的掩码
extern "C" void pmem_write(int waddr, int wdata, char wmask) {
  uint32_t addr = (uint32_t)(waddr & ~0x3u);
  printf("pmem_write: addr = 0x%08x, data = 0x%08x, mask = 0x%02x\n", addr, wdata, wmask);

  // 串口MMIO: 输出字符
  if (addr == SERIAL_MMIO) {
    printf("Serial output: 0x%02x ('%c')\n", wdata & 0xFF, wdata & 0xFF);
    putchar(wdata);
    fflush(stdout);
    return;
  }

  // 普通内存写入, 按字节掩码写入
  if (in_pmem(addr)) {
    printf("Writing to pmem at address: 0x%08x with data: 0x%08x and mask: 0x%02x\n", addr, wdata, wmask);
    uint8_t *p = guest_to_host(addr);
    uint8_t *data_bytes = (uint8_t *)&wdata;
    for (int i = 0; i < 4; i++) {
      if (wmask & (1 << i)) {
        p[i] = data_bytes[i];
      }
    }
  }
  else {
    fprintf(stderr, "Invalid memory write at address: 0x%08x\n", addr);
    exit(1);
  }
}

int main() {
  printf("Hello, ysyx!\n");
  return 0;
}
