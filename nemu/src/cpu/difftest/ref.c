/***************************************************************************************
* Copyright (c) 2014-2024 Zihao Yu, Nanjing University
*
* NEMU is licensed under Mulan PSL v2.
* You can use this software according to the terms and conditions of the Mulan PSL v2.
* You may obtain a copy of Mulan PSL v2 at:
*          http://license.coscl.org.cn/MulanPSL2
*
* THIS SOFTWARE IS PROVIDED ON AN "AS IS" BASIS, WITHOUT WARRANTIES OF ANY KIND,
* EITHER EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO NON-INFRINGEMENT,
* MERCHANTABILITY OR FIT FOR A PARTICULAR PURPOSE.
*
* See the Mulan PSL v2 for more details.
***************************************************************************************/

#include <isa.h>
#include <cpu/cpu.h>
#include <difftest-def.h>
#include <memory/paddr.h>

// 在DUT host memory的`buf`和REF guest memory的`addr`之间拷贝`n`字节,
// `direction`指定拷贝的方向, `DIFFTEST_TO_DUT`表示往DUT拷贝, `DIFFTEST_TO_REF`表示往REF拷贝
__EXPORT void difftest_memcpy(paddr_t addr, void *buf, size_t n, bool direction) {
  //由于nemu中指针和主机的并不一直，所以不能用memcpy
  if(direction == DIFFTEST_TO_DUT) {
    for(int i = 0; i < n; i++) {
      paddr_write(addr + i, 1, ((uint8_t *)buf)[i]);
    }
  }
  else {
    // 从DUT host memory的`buf`拷贝到REF guest memory的`addr`
    for(int i = 0; i < n; i++) {
      ((uint8_t *)buf)[i] = paddr_read(addr + i, 1);
    }
  }
}


// `direction`为`DIFFTEST_TO_DUT`时, 获取REF的寄存器状态到`dut`;
// `direction`为`DIFFTEST_TO_REF`时, 设置REF的寄存器状态为`dut`;
__EXPORT void difftest_regcpy(void *dut, bool direction) {
  //获取REF的寄存器到dut
  if(direction == DIFFTEST_TO_DUT) {
    for(int i = 0; i < 32; i++) {
      ((CPU_state *)dut)->gpr[i] = cpu.gpr[i];
    }
    ((CPU_state *)dut)->pc = cpu.pc;
  }
  else {
    // 设置REF的寄存器状态为`dut`
    for(int i = 0; i < 32; i++) {
      cpu.gpr[i] = ((CPU_state *)dut)->gpr[i];
    }
    cpu.pc = ((CPU_state *)dut)->pc;
  }
}

//让REF执行`n`条指令
__EXPORT void difftest_exec(uint64_t n) {
  cpu_exec(n);
}

__EXPORT void difftest_raise_intr(word_t NO) {
  assert(0);
}

__EXPORT void difftest_init(int port) {
  void init_mem();
  init_mem();
  /* Perform ISA dependent initialization. */
  init_isa();
}
