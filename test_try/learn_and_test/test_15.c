#include <stdio.h>

// 创建求和函数
void calculateSum() {
  int x = 5;
  int y = 10;
  int sum = x + y;
  printf("x 和 y 的和是: %d\n", sum);
}
void test() {
  int a = 10;
  int b = 20;
  int sum = a + b;
  printf("a 和 b 的和是: %d\n", sum);
}
int main() {
  calculateSum();  // 调用函数
  test();          // 调用函数
  return 0;
}