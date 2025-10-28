#include <stdio.h>

int main() {
    // 用long long防止溢出（题目中y0和t最大1e18，long long足够存储）
    long long y0, t;
    scanf("%lld %lld", &y0, &t);

    // 1. 判断正负性（第一行输出）
    if (t == 0) {
        printf("NO\n");  // t=0时s=1，正数
    } else {
        if (y0 < 0 && t % 2 == 1) {
            printf("YES\n");  // 负号的奇次幂是负数
        } else {
            printf("NO\n");   // 正数/0/负号偶次幂，均非负
        }
    }

    // 2. 判断奇偶性（第二行输出）
    if (t == 0) {
        printf("YES\n");  // t=0时s=1，奇数
    } else {
        if (y0 % 2 == 1 || y0 % 2 == -1) {
            printf("YES\n");  // y0是奇数（正奇数或负奇数）
        } else {
            printf("NO\n");   // y0是偶数（包括0）
        }
    }

    return 0;
}