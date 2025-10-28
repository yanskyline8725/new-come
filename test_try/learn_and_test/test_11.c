#include <stdio.h>
#include <string.h>
 
int main() {
  char str1[20] = "Hello";
  char str2[] = "World!";
 
  // 将 str2 拼接到 str1 (结果存储在 str1 中)
  strcat(str1, str2);
  
  // 打印 str1
  printf("%s", str1);
 
  return 0;
}