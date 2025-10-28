#include<stdio.h>
int main() {
    float b_90=6.95,b_93=7.44,b_97=7.93;
    int a,b;
    char c;
    scanf("%d %d %c",&a,&b,&c);
    float fee;
    if(b==90) {
        fee=b_90*a;
    }
    else if(b==93) {
        fee=b_93*a;
    }
    else if(b==97) {
        fee=b_97*a;
    }
    if(c=='m') {
        fee=fee*0.95;
    }
    else if(c=='e') {
        fee=fee*0.97;
    }
    printf("%.2f",fee);
    return 0;
}