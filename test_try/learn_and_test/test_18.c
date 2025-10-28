/*函数的相互调用
只要先声明函数，就可以实现函数间的相互调用：
为了优化代码，建议将函数的声明和定义分开。

你经常会看到在 main() 函数上面有函数声明的 C 程序，而在 main() 函数下面有函数定义。这将使代码组织得更好，更易于阅读：

*/
#include <stdio.h>

// 声明两个函数：myFunction 和 myOtherFunction
void myFunction();
void myOtherFunction();

int main() {
  myFunction(); // 从 main 调用 myFunction
  return 0;
}

// 定义 myFunction
void myFunction() {
  printf("myFunction 中的文本\n");
  myOtherFunction(); // 在 myFunction 中调用 myOtherFunction
}

// 定义 myOtherFunction
void myOtherFunction() {
  printf("嘿！myOtherFunction 中的文本\n");
}