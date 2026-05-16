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

#include "sdb.h"

#define NR_WP 32

static WP wp_pool[NR_WP] = {};
static WP *head = NULL, *free_ = NULL;

void init_wp_pool() {
  int i;
  for (i = 0; i < NR_WP; i ++) {
    wp_pool[i].NO = i;
    wp_pool[i].next = (i == NR_WP - 1 ? NULL : &wp_pool[i + 1]);
  }

  head = NULL;
  free_ = wp_pool;
}

//添加一个新的watchpoint
WP* new_wp() {
  if(free_ == NULL) {
    printf("No free watchpoint\n");
    assert(0);
    return NULL;
  }
  WP *wp = free_;
  free_ = free_->next;
  wp->next = head;
  head = wp;
  return wp;
}

void free_wp(WP *wp) {
  if(wp == NULL) {
    printf("Cannot free a NULL watchpoint\n");
    assert(0);
    return;
  }
  WP *prev = NULL, *cur = head;
  while(cur != NULL) {
    if(cur == wp) {
      //wp是头节点
      if(prev == NULL) {
        head = cur->next;
      }
      //删除cur节点
      else {
        prev->next = cur->next;
      }
      //将cur节点加入free链表而且重置表达式
      memset(cur->expr, 0, sizeof(cur->expr));
      cur->next = free_;
      free_ = cur;
      return;
    }
    prev = cur;
    cur = cur->next;
  }
  printf("Cannot find the watchpoint to free\n");
}

bool delete_wp_by_no(int no) {
  WP *wp = head;
  while(wp != NULL) {
    if(wp->NO == no) {
      free_wp(wp);
      return true;
    }
    wp = wp->next;
  }
  return false;
}

//检查监视点的值是否发生变化
bool check_watchpoints() {
  bool changed = false;
  WP *wp = NULL;
  bool success;
  for(wp = head; wp != NULL; wp = wp->next) {
    word_t new_value = expr(wp->expr, &success);
    if(success == false) {
      printf("Failed to evaluate the expression of watchpoint %d: %s\n", wp->NO, wp->expr);
      continue;
    }
    if(new_value != wp->old_value) {
      nemu_state.state = NEMU_STOP;
      printf("Watchpoint %d: %s\n", wp->NO, wp->expr);
      printf("Old value = " FMT_WORD "\n", wp->old_value);
      printf("New value = " FMT_WORD "\n", new_value);
      wp->old_value = new_value;
      changed = true;
    }
  }
  return changed;
}

void wp_display() {
  WP *wp = NULL;
  printf("%-8s %-24s %s\n", "Num", "Expression", "Old Value");
  for(wp = head; wp != NULL; wp = wp->next) {
    printf("%-8d %-24s " FMT_WORD "\n", wp->NO, wp->expr, wp->old_value);
  }
}  

