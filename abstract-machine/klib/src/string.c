#include <klib.h>
#include <klib-macros.h>
#include <stdint.h>

#if !defined(__ISA_NATIVE__) || defined(__NATIVE_USE_KLIB__)

size_t strlen(const char *s) {
  int length = 0;
  while (s[length] != '\0') {
    length++;
  }
  return length;
}

char *strcpy(char *dst, const char *src) {
  char *ptr = dst;
  while (*src != '\0') {
    *ptr++ = *src++;
  }
  *ptr = '\0';
  return dst;
}

char *strncpy(char *dst, const char *src, size_t n) {
  char *ptr = dst;
  size_t i = 0;
  while (i < n && *src != '\0') {
    *ptr++ = *src++;
    i++;
  }
  //补全末尾
  *ptr = '\0';
  return dst;
}

char *strcat(char *dst, const char *src) {
  char *ptr = dst;
  while (*ptr != '\0') {
    ptr++;
  }
  while (*src != '\0') {
    *ptr++ = *src++;
  }
  *ptr = '\0';
  return dst;
}

int strcmp(const char *s1, const char *s2) {
  const char *ptr_1 = s1;
  const char *ptr_2 = s2;
  while (*ptr_1 != '\0' && *ptr_2 != '\0') {
    if (*ptr_1 != *ptr_2) {
      return *ptr_1 - *ptr_2;
    }
    else{
      ptr_1++;
      ptr_2++;
    }
  }
  if(*ptr_1 == '\0' && *ptr_2 == '\0') {
    return 0;
  }
  else if(*ptr_1 == '\0') {
    return -1;
  }
  else {
    return 1;
  }
}

int strncmp(const char *s1, const char *s2, size_t n) {
  const char *ptr_1 = s1;
  const char *ptr_2 = s2;
  size_t i = 0;
  while (i < n && *ptr_1 != '\0' && *ptr_2 != '\0') {
    if (*ptr_1 != *ptr_2) {
      return *ptr_1 - *ptr_2;
    }
    else{
      ptr_1++;
      ptr_2++;
      i++;
    }
  }
  if(i == n) {
    return 0;
  }
  else if(*ptr_1 == '\0' && *ptr_2 == '\0') {
    return 0;
  }
  else if(*ptr_1 == '\0') {
    return -1;
  }
  else {
    return 1;
  }
}

void *memset(void *s, int c, size_t n) {
  //在c语言的从哦啊座规范中，内存块看作是unsigned char来处理
  unsigned char *ptr = s;
  for (size_t i = 0; i < n; i++) {
    *ptr++ = (unsigned char)c;
  }
  return s;
}

void *memmove(void *dst, const void *src, size_t n) {
  unsigned char *ptr_dst = (unsigned char *)dst;
  const unsigned char *ptr_src = (const unsigned char *)src;
  //有几种重叠的情况 
  if(ptr_dst < ptr_src) {
    for (size_t i = 0; i < n; i++) {
      *ptr_dst++ = *ptr_src++;
    }
  }
  //如果dst在src的后面，应该从后往前复制，避免覆盖未复制的内容
  else if(ptr_dst > ptr_src) {
    ptr_dst += n - 1;
    ptr_src += n - 1;
    for (size_t i = 0; i < n; i++) {
      *ptr_dst-- = *ptr_src--;
    }
  }
  return dst;
}

//cpy不用考虑重叠的情况，有更好的性能
void *memcpy(void *out, const void *in, size_t n) {
  unsigned char *ptr_out = (unsigned char *)out;
  const unsigned char *ptr_in = (unsigned char *)in;
  for (size_t i = 0; i < n; i++) {
    *ptr_out++ = *ptr_in++;
  }
  return out;
}

int memcmp(const void *s1, const void *s2, size_t n) {
  const unsigned char *ptr_1 = (const unsigned char *)s1;
  const unsigned char *ptr_2 = (const unsigned char *)s2;
  for (size_t i = 0; i < n; i++) {
    if (*ptr_1 != *ptr_2) {
      return *ptr_1 - *ptr_2;
    }
    ptr_1++;
    ptr_2++;
  }
  return 0;
}

#endif
