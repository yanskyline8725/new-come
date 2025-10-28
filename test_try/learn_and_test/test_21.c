/*文件处理
在 C 语言中，你可以通过声明一个 FILE 类型的指针，并使用 fopen() 函数来创建、打开、读取和写入文件：

FILE *fptr
fptr = fopen(filename, mode);
FILE 基本上是一种数据类型，我们需要创建一个指针变量（fptr）来使用它。现在，这行代码并不重要。这只是您处理文件时所需要的。

要实际打开文件，请使用 fopen() 函数，它接受两个参数：

参数	描述
filename	您要打开（或创建）的实际文件的名称，如 filename.txt
mode	
单个字符，代表您要对文件执行的操作（读取、写入或追加）：

w - 写入文件
a - 向文件追加新数据
r - 从文件中读取
*/
#include <stdio.h>
int main() {

FILE *fptr;

// 以写入模式打开文件
fptr = fopen("E://code_try//filename.txt", "w");

// 向文件写入一些文本
fprintf(fptr, "Some text\n");
fclose(fptr);  // 关闭第一个文件句柄
// 以追加模式打开文件
fptr = fopen("E://code_try//filename.txt", "a");

// 向文件中追加一些文本
fprintf(fptr, "\nHi");


// 关闭文件
fclose(fptr);
return 0;
}