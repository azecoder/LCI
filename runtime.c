#include "stdint.h"
#include "stdlib.h"
#include "stdio.h"

void print_f32(float x) {
  printf("%f.8\n", x);
}

void print_i32(int32_t x) {
  printf("%d\n", x);
}

void print_i1(int x) {
  if (x) {
    printf("true\n");
  } else {
    printf("false\n");
  }
}









