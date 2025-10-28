#include<stdio.h>
   int main() {
     int num;
        scanf("%d", &num);
        int a,b,c;
        a = num / 100;
        b = (num / 10) % 10;
        c = num % 10;
        if(c == 0 && b != 0) {
            num=b*10+a;
        }
        else if(c == 0 && b == 0) {
            num=a;
        }
        else {
            num=c*100 + b*10 + a;
   }
        printf("%d\n",num);
        return 0;
    }