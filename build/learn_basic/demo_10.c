#include <stdio.h>

int main() {
    int arr[5];
    printf("请输入五个整数,中间用空格隔开：\n");
    for (int i = 0; i < 5; i++) 
    { scanf("%d", &arr[i]);  
      printf("你输入的五个数是：arr[%d] = %d\n", i, arr[i]);
        /* code */
    }
    return 0;
     }