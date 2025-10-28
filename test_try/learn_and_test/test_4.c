#include <stdio.h>
#include <stdbool.h>  // 导入布尔类型头文件

int main() {
  bool isHamburgerTasty = true;
  bool isPizzaTasty = false;
  printf("%d", isHamburgerTasty == isPizzaTasty);
  
  return 0;
}