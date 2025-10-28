#include <stdio.h>
//在前面的示例中使用的 void 关键字表示函数不应返回值。如果你想让函数返回一个值，你可以使用数据类型（如 int 或 float 等）代替 void，并在函数内部使用 return 关键字：

int myFunction(int x) {
  return 666 + x;
}

int main() {
  printf("结果是：%d", myFunction(3));
  return 0;
}