#include <am.h>
#include <klib.h>
#include <klib-macros.h>
#include <stdarg.h>

#if !defined(__ISA_NATIVE__) || defined(__NATIVE_USE_KLIB__)

// 输出一个字符到缓冲区
#define PUTC(ch) do { \
  if (n > 0 && count < n - 1) out[count] = (ch); \
  count++; \
} while(0)

int vsnprintf(char *out, size_t n, const char *fmt, va_list ap) {
  size_t count = 0;

  while (*fmt != '\0') {
    if (*fmt == '%') {
      fmt++;

      // 解析标志: '-' 左对齐, '0' 补零
      bool left_align = false;
      bool pad_zero = false;
      while (*fmt == '-' || *fmt == '0') {
        if (*fmt == '-') left_align = true;
        if (*fmt == '0') pad_zero = true;
        fmt++;
      }

      // 解析宽度
      int width = 0;
      while (*fmt >= '0' && *fmt <= '9') {
        width = width * 10 + (*fmt - '0');
        fmt++;
      }

      // 跳过长度修饰符 (l, ll 等, RV32下与默认相同)
      while (*fmt == 'l' || *fmt == 'h') fmt++;

      if (*fmt == 'd') {
        int num = va_arg(ap, int);
        unsigned int unum;
        bool neg = false;
        if (num < 0) {
          neg = true;
          unum = (unsigned int)(-(num + 1)) + 1;
        } else {
          unum = (unsigned int)num;
        }

        // 计算数字位数
        char buf[20];
        int i = 0;
        do {
          buf[i++] = unum % 10 + '0';
          unum /= 10;
        } while (unum > 0);

        int num_len = i + (neg ? 1 : 0);
        int pad_len = (width > num_len) ? (width - num_len) : 0;

        // 零填充时, 负号在前: -0003
        if (neg && pad_zero) PUTC('-');
        // 左侧填充
        if (!left_align) {
          char pc = pad_zero ? '0' : ' ';
          for (int j = 0; j < pad_len; j++) PUTC(pc);
        }
        // 空格填充时, 负号在填充后:    -3
        if (neg && !pad_zero) PUTC('-');
        // 输出数字
        for (int j = i - 1; j >= 0; j--) PUTC(buf[j]);
        // 右侧填充 (左对齐)
        if (left_align) {
          for (int j = 0; j < pad_len; j++) PUTC(' ');
        }

      } 
      
      else if (*fmt == 'u') {
        unsigned int unum = va_arg(ap, unsigned int);
        char buf[20];
        int i = 0;
        do {
          buf[i++] = unum % 10 + '0';
          unum /= 10;
        } while (unum > 0);

        int pad_len = (width > i) ? (width - i) : 0;
        if (!left_align) {
          char pc = pad_zero ? '0' : ' ';
          for (int j = 0; j < pad_len; j++) PUTC(pc);
        }
        for (int j = i - 1; j >= 0; j--) PUTC(buf[j]);
        if (left_align) {
          for (int j = 0; j < pad_len; j++) PUTC(' ');
        }

      } 
      
      else if (*fmt == 'x' || *fmt == 'X') {
        unsigned int unum = va_arg(ap, unsigned int);
        int upper = (*fmt == 'X');
        char buf[20];
        int i = 0;
        do {
          buf[i++] = upper ? "0123456789ABCDEF"[unum % 16] : "0123456789abcdef"[unum % 16];
          unum /= 16;
        } while (unum > 0);

        int pad_len = (width > i) ? (width - i) : 0;
        if (!left_align) {
          char pc = pad_zero ? '0' : ' ';
          for (int j = 0; j < pad_len; j++) PUTC(pc);
        }
        for (int j = i - 1; j >= 0; j--) PUTC(buf[j]);
        if (left_align) {
          for (int j = 0; j < pad_len; j++) PUTC(' ');
        }

      } else if (*fmt == 'c') {
        char ch = (char)va_arg(ap, int);
        int pad_len = (width > 1) ? (width - 1) : 0;
        if (!left_align) {
          for (int j = 0; j < pad_len; j++) PUTC(' ');
        }
        PUTC(ch);
        if (left_align) {
          for (int j = 0; j < pad_len; j++) PUTC(' ');
        }

      } else if (*fmt == 's') {
        char *str = va_arg(ap, char *);
        if (str == NULL) str = "(null)";
        int slen = 0;
        while (str[slen]) slen++;
        int pad_len = (width > slen) ? (width - slen) : 0;
        if (!left_align) {
          for (int j = 0; j < pad_len; j++) PUTC(' ');
        }
        while (*str) {
          PUTC(*str);
          str++;
        }
        if (left_align) {
          for (int j = 0; j < pad_len; j++) PUTC(' ');
        }

      } else if (*fmt == '%') {
        PUTC('%');
      } else {
        // 不支持的格式原样输出
        PUTC('%');
        if (*fmt) PUTC(*fmt);
      }
    } else {
      PUTC(*fmt);
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

#undef PUTC

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
