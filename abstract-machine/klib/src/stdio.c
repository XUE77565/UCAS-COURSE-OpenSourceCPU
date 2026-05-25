#include <am.h>
#include <klib.h>
#include <klib-macros.h>
#include <stdarg.h>

#if !defined(__ISA_NATIVE__) || defined(__NATIVE_USE_KLIB__)

int vsnprintf(char *out, size_t n, const char *fmt, va_list ap) {
  size_t count = 0;
  while (*fmt != '\0') {
    if (*fmt == '%') {
      fmt++;
      if (*fmt == 'd') {
        int num = va_arg(ap, int);
        unsigned int unum;
        if (num < 0) {
          if (n > 0 && count < n - 1) {
            out[count] = '-';
          }
          count++;
          //这样避免了溢出的循环
          unum = (unsigned int)(-(num + 1)) + 1;
        } else {
          unum = (unsigned int)num;
        }
        char buf[20];
        int i = 0;
        do {
          buf[i++] = unum % 10 + '0';
          unum /= 10;
        } while (unum > 0);
        for (int j = i - 1; j >= 0; j--) {
          if (n > 0 && count < n - 1) {
            out[count] = buf[j];
          }
          count++;
        }
      } else if (*fmt == 's') {
        char *str = va_arg(ap, char *);
        if (str == NULL) str = "(null)";
        while (*str != '\0') {
          if (n > 0 && count < n - 1) {
            out[count] = *str;
          }
          count++;
          str++;
        }
      } else if (*fmt == '%') {
        if (n > 0 && count < n - 1) {
          out[count] = '%';
        }
        count++;
      } else {
        // 对于尚未支持的格式（比如 %x），原样输出
        if (n > 0 && count < n - 1) {
          out[count] = '%';
        }
        count++;
        if (n > 0 && count < n - 1) {
          out[count] = *fmt;
        }
        count++;
      }
    } else {
      if (n > 0 && count < n - 1) {
        out[count] = *fmt;
      }
      count++;
    }
    fmt++;
  }
  
  if (n > 0) {
    if (count < n) {
      out[count] = '\0';
    } else {
      out[n - 1] = '\0';
    }
  }
  return (int)count;
}

int snprintf(char *out, size_t n, const char *fmt, ...) {
  va_list ap;
  va_start(ap, fmt);
  int ret = vsnprintf(out, n, fmt, ap);
  va_end(ap);
  return ret;
}

int vsprintf(char *out, const char *fmt, va_list ap) {
  // trick: size_t 是无符号的，-1 转成 size_t 等于它的最大值，相当于不限制长度
  return vsnprintf(out, (size_t)-1, fmt, ap);
}

int sprintf(char *out, const char *fmt, ...) {
  va_list ap;
  va_start(ap, fmt);
  int ret = vsprintf(out, fmt, ap);
  va_end(ap);
  return ret;
}

int printf(const char *fmt, ...) {
  char buf[2048]; // 分配2KB左右的缓冲区支持本地打印通常绰绰有余
  va_list ap;
  va_start(ap, fmt);
  int ret = vsnprintf(buf, sizeof(buf), fmt, ap);
  va_end(ap);
  
  for (int i = 0; i < ret && i < sizeof(buf) - 1; i++) {
    putch(buf[i]);
  }
  return ret;
}

#endif
