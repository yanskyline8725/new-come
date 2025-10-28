#include<stdio.h>
#include<math.h>  // 用于sqrt函数

// 判断是不是素数
int isPrime(int n) {
    // 小于2的数不是素数
    if (n <= 1) {
        return 0;
    }
    // 2是素数
    if (n == 2) {
        return 1;
    }
    // 偶数不是素数
    if (n % 2 == 0) {
        return 0;
    }
    // 只需判断到sqrt(n)，且只判断奇数
    int sqrt_n = (int)sqrt(n);
    for (int i = 3; i <= sqrt_n; i += 2) {
        if (n % i == 0) {
            return 0;
        }
    }
    return 1;
}

int main() {   
    int n;
    printf("请输入一个数:");
    scanf("%d", &n);
    
    if (isPrime(n)) {
        printf("%d是素数\n", n);
    } else {
        printf("%d不是素数\n", n);
    }
    
    return 0;
}
