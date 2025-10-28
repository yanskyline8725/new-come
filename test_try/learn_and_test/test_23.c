#include <stdio.h>

int main() {
  FILE *fptr;

  // 以读取模式打开文件
  fptr = fopen("E://code_try//filename.txt", "r");

  // 存储文件内容
  char myString[100];

  // 如果文件存在
  if(fptr != NULL) {
  
    // 读取内容并打印
    while(fgets(myString, 100, fptr)) {
      printf("%s", myString);
    }
    
  // 如果文件不存在
  } else {
    printf("无法打开文件。");
  }

  // 关闭文件
  fclose(fptr);

  return 0;
}