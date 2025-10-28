#include <stdio.h>

struct myStructure {
  int myNum;
  char myLetter;
};

int main() {
  // 创建不同的结构体变量
  struct myStructure s1;
  struct myStructure s2;

  // 为不同结构体变量赋值
  s1.myNum = 13;
  s1.myLetter = 'B';
/*请记住，C 语言中的字符串实际上是一个字符数组，不幸的是，您不能像这样向数组赋值：
实例
struct myStructure {
  int myNum;
  char myLetter;
  char myString[30];  // 字符串
};

int main() {
  struct myStructure s1;

  // 试图给字符串赋值
  s1.myString = "Some text";

  // 试图打印值
  printf("My string: %s", s1.myString);

  return 0;
}
这样会出现错误：

prog.c:12:15: error: assignment to expression with array type

然而，这个问题是有解决方案的！你可以使用 strcpy() 函数将值赋给 s1.myString，像这样：

实例
struct myStructure {
  int myNum;
  char myLetter;
  char myString[30]; // String
};

int main() {
  struct myStructure s1;

  // 使用 strcpy 函数为字符串赋值
  strcpy(s1.myString, "Some text");

  // 打印值
  printf("My string: %s", s1.myString);

  return 0;
}
结果：

My string: Some text
亲自试一试

*/
  s2.myNum = 20;
  s2.myLetter = 'C';

  // 打印各成员值
  printf("s1 数字值: %d\n", s1.myNum);
  printf("s1 字符值: %c\n", s1.myLetter);

  printf("s2 数字值: %d\n", s2.myNum);
  printf("s2 字符值: %c\n", s2.myLetter);

  return 0;
}