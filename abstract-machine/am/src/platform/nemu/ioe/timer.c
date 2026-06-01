#include <am.h>
#include <nemu.h>

static uint64_t boot_time = 0;

static uint64_t read_time() {
  uint32_t high = inl(RTC_ADDR + 4);
  uint32_t low = inl(RTC_ADDR);
  return ((uint64_t)high << 32) | low;
}


void __am_timer_init() {
  boot_time = read_time();
}

//由于在nemu中的timer是在offset=4的时候才获取真实事件，所以应该先访问高32
void __am_timer_uptime(AM_TIMER_UPTIME_T *uptime) {
  //从RTC_ADDR处获取长度为8字节的MMIO空间，来获取64位当前的时间
  uptime->us = read_time() - boot_time;
}

void __am_timer_rtc(AM_TIMER_RTC_T *rtc) {
  rtc->second = 0;
  rtc->minute = 0;
  rtc->hour   = 0;
  rtc->day    = 0;
  rtc->month  = 0;
  rtc->year   = 1900;
}
