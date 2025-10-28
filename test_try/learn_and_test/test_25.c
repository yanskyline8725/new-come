/*更简洁的语法
你也可以在声明结构体变量时，直接在一行中给其成员赋值。

只需在大括号 {} 内以逗号分隔的列表中插入值即可。注意，使用这种方法时，对于字符串值，你不需要使用 strcpy() 函数：

实例
// 创建一个结构体
struct myStructure {
  int myNum;
  char myLetter;
  char myString[30];
};

int main() {
  // 创建一个结构体变量并给其赋值
  struct myStructure s1 = {13, 'B', "Some text"};

  // 打印值
  printf("%d %c %s", s1.myNum, s1.myLetter, s1.myString);

  return 0;
}
亲自试一试
注意：插入的值的顺序必须与结构体中声明的变量类型的顺序相匹配（例如，13 对应于 int，'B' 对应于 char 等）。

复制结构体
你还可以将一个结构体的值赋给另一个结构体。

在下面的示例中，s1 的值被复制到了 s2：

实例
struct myStructure s1 = {13, 'B', "Some text"};
struct myStructure s2;

s2 = s1;
亲自试一试
修改值
如果你想修改/更改某个值，你可以使用点语法（.）。

而要修改字符串值，strcpy() 函数再次派上了用场：

实例
struct myStructure {
  int myNum;
  char myLetter;
  char myString[30];
};


int main() {
  // 创建一个结构体变量并给其赋值
  struct myStructure s1 = {13, 'B', "Some text"};

  // 修改值
  s1.myNum = 30;
  s1.myLetter = 'C';
  strcpy(s1.myString, "Something else");

  // 打印值
  printf("%d %c %s", s1.myNum, s1.myLetter, s1.myString);

  return 0;
}
亲自试一试
当你复制结构体的值时，修改值尤其有用：

实例
// 创建一个结构体变量并给其赋值
struct myStructure s1 = {13, 'B', "Some text"};

// 创建另一个结构体变量
struct myStructure s2;

// 将 s1 值复制到 s2
s2 = s1;

// 更改 s2 的值
s2.myNum = 30;
s2.myLetter = 'C';
strcpy(s2.myString, "Something else");

// 打印值
printf("%d %c %s\n", s1.myNum, s1.myLetter, s1.myString);
printf("%d %c %s\n", s2.myNum, s2.myLetter, s2.myString);
*/
#include <stdio.h>

struct Car {
  char brand[50];
  char model[50];
  int year;
};

int main() {
  struct Car car1  = {"BMW", "X5", 1999};
  struct Car car2  = {"Ford", "Mustang", 1969};
  struct Car car3  = {"Tesla", "ModelY", 2025};

  printf("%s %s %d\n", car1.brand, car1.model, car1.year);
  printf("%s %s %d\n", car2.brand, car2.model, car2.year);
  printf("%s %s %d\n", car3.brand, car3.model, car3.year);

  return 0;
}