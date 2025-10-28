#include<stdio.h>
//判断是不是素数

int main()
{   
    int n,i;
    int is_prime=1;
    printf("请输入一个数:");
    scanf ("%d",&n);
    for(i=2;i<n;i++) {

    if(n%i==0) {
        is_prime=0;
      // 不是素数 
        break;
    }
}
     
    if (n<=1) {
        is_prime=0;
    }
    if (is_prime==1) {
        printf("%d是素数\n",n);
    }
    else {
        printf("%d不是素数\n",n);
    }

    
    }
    
