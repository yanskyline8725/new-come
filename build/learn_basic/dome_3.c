# include <stdio.h>
# include <stdbool.h>
// 我要求两个数的差的绝对值
// 例如：2和8的差的绝对值是6
int main() {
    int a = 8;
    int b = 8;
    int c = a - b;
    int d = b - a;
    bool flag = a >= b;
    if (flag)
    {   printf("a和b的差的绝对值为%d\n",c);  /* code */
    }
    else
    {
        printf("a和b的差的绝对值为%d\n",d);
    }
    return 0;
   }