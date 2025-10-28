#include <stdio.h>

int main() {
  FILE *fptr;

  // 以读取模式打开文件
  fptr = fopen("E://code_try//filename.txt", "r");
  if (fptr == NULL) {
    printf("无法打开文件\n");
    return 1;
}
  // 存储文件内容
  char myString[100];

  // 读取内容并打印
  while(fgets(myString, 100, fptr)) {
    printf("%s", myString);
  }

  // 关闭文件
  fclose(fptr);
  printf("\n运行结束\n");

  return 0;
}
/*  文件处理
在 C 语言中，你可以通过声明一个 FILE 类型的指针，并使用 fopen() 
函数来创建、打开、读取和写入文件：
FILE *fptr
fptr = fopen(filename, mode);
FILE 基本上是一种数据类型，我们需要创建一个指针变量（fptr）
来使用它。现在，这行代码并不重要。这只是您处理文件时所需要的。
要实际打开文件，请使用 fopen() 函数，它接受两个参数：
参数	描述
filename	您要打开（或创建）的实际文件的名称，如 filename.txt
mode
单个字符，代表您要对文件执行的操作（读取、写入或追加）：
r - 从文件中读取
w - 写入文件
a - 向文件追加新数据

注意：fgets 函数只读取文件的第一行。如果你还记得的话，filename.txt 文件中有两行文本。

要读取文件的每一行，你可以使用 while 循环：
while(fgets(myString, 100, fptr)) {
  printf("%s", myString);
}


  为了读取 filename.txt 的内容，我们可以使用 fgets() 函数。

fgets() 函数采用三个参数：

实例
fgets(myString, 100, fptr);
第一个参数指定在哪里存储文件内容，它将存储在我们刚刚创建的 myString 数组中。
第二个参数指定要读取的数据的最大大小，它应该与 myString 的大小（100）相匹配。
第三个参数需要一个用于读取文件的文件指针（在我们的示例中为 fptr）

*/
