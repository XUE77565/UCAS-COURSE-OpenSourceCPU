#include <stdio.h>
#include <stdlib.h>

extern "C" void set_ebreak() {
  printf("ebreak: program has finished. SUCCESS\n");
  exit(0);
}

int main() {
  printf("Hello, ysyx!\n");
  return 0;
}
