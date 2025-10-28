#include <stdio.h>
int main() {

    FILE *fptr;

    // 以写入模式打开文件
    fptr = fopen("E://code_try//filename.txt", "w");
    if (fptr == NULL) {  // 检查文件是否成功打开
        printf("无法打开文件\n");
        return 1;
    }

    // 向文件写入一些文本
    fprintf(fptr, "Some text\n");
    fclose(fptr);  // 关闭第一个文件句柄

    // 以追加模式打开文件
    fptr = fopen("E://code_try//filename.txt", "a");
    if (fptr == NULL) {  // 再次检查文件是否成功打开
        printf("无法打开文件\n");
        return 1;
    }
/*好的实践
如果你尝试打开一个不存在的文件进行读取，fopen() 函数将返回 NULL。

提示：作为一项好的实践，我们可以使用 if 语句来测试是否为 NULL，并在文件不存在时打印一些文本（例如）：
*/
    // 向文件中追加一些文本
    fprintf(fptr, "\nHi");

    // 关闭文件
    fclose(fptr);
    return 0;
}