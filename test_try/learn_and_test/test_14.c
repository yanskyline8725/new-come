#include <stdio.h>

int main() {
  int myAge = 43;     // 变量声明 
  int* ptr = &myAge;  // 指针声明

  // 引用： 通过指针输出 myAge 的内存地址 (0x7ffe5367e044)
  printf("%p\n", ptr);

  // 解引用： 通过指针输出 myAge 的值 (43)
  printf("%d\n", *ptr);
  
  return 0;
}