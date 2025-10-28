#include <stdio.h>
// 打招呼脚本
 int main() {
     int n ;
     printf("请输入你想打招呼的次数：\n");
     scanf("%d", &n);
     char a[20];
     for (int i = 1; i <= n; i++) {
        printf("同学你的名字是：\n");
        scanf("%16s", a);
        printf("你好%s同学,欢迎来到C语言的世界！\n", a);
        printf("这是第%d次打招呼\n", i);
     }
     printf("打招呼结束！\n");
     return 0;

 }
