#include <stdio.h>
#include <string.h>

int main() {
  char str1[] = "Hello";
  char str2[] = "Hello"; 
  char str3[] = "Hi";

  // 比较 str1 和 str2，并打印结果
  printf("%d\n", strcmp(str1, str2));
  
  // 比较 str1 和 str3，并打印结果
  printf("%d\n", strcmp(str1, str3));
  
  return 0;
}