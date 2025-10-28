#include <stdio.h>

int main() {
   // 存储不同年龄的数组
  int ages[] = {20, 22, 18, 35, 48, 26, 87, 70};
  
  int i;
  
  // 获取数组长度
  int length = sizeof(ages) / sizeof(ages[0]);
  
  // 创建'最大年龄'变量并初始化为数组第一个元素
  int maxAge = ages[0];

  // 遍历数组查找最小年龄
  for (i = 0; i < length; i++) {
  
    // 检查当前年龄是否大于当前'最小年龄'
    if (maxAge < ages[i]) {
    
      // 若找到更大年龄，则更新'最大年龄'
      maxAge = ages[i];
    }
  }
 
  // 输出最大年龄
  printf("数组中的最大年龄是: %d", maxAge);
   
  return 0;
}