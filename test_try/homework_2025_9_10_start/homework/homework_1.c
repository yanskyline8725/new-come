// 使用 Visual Studio Code（VSCode）集成开发环境，配合合适的 C 语言编译工具链（如 MinGW），对上述代码进行编辑。编辑完成后，通过 VSCode 相关的编译、连接配置（可借助 tasks.json 等文件设置编译任务）生成可执行文件，运行该文件后得到结果。
#include<stdio.h>
int main(){
    int a;
    a=37*123-64;
    printf("37*123-64=%d\n",a);
    return 0;
}