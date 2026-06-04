#ifndef SDB_H__
#define SDB_H__

#include <stdint.h>

// 仿真状态
enum { NPC_RUNNING, NPC_STOP, NPC_END, NPC_ABORT, NPC_QUIT };

// 全局仿真状态
typedef struct {
  int state;
  uint64_t nr_inst;  // 已执行的指令数
} NPCState;

extern NPCState npc_state;

// sdb接口函数
void sdb_mainloop();
void sdb_set_batch_mode();

// 仿真控制 (由main.cpp提供具体实现)
void sim_init(const char *bin_path);   // 初始化仿真, 加载二进制
bool sim_clock_step();                  // 推进一个时钟周期, 返回是否有指令retire
void sim_exec(uint64_t n);             // 执行n条指令

// 寄存器访问 (通过DPI-C实现)
uint32_t sim_get_pc();
uint32_t sim_get_reg(int idx);
void sim_print_regs();

#endif
