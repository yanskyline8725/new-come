#include <stdio.h>
// 定义最大方阵大小
#define MAXN 205

// 存储方阵
int a[MAXN][MAXN];
// 存储每个位置四周男生数量的奇偶性（0 表示偶数，1 表示奇数）
int b[MAXN][MAXN];
// 存储需要改变性别的位置（0 表示女生，1 表示男生，这里用于标记是否改变）
int c[MAXN][MAXN];
// 方阵大小
int n;
// 最少需要改变的女生数量
int ans = 0x3f3f3f3f;

// 检查当前方阵是否满足完美方阵的条件
int check() {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            int cnt = 0;
            // 统计当前位置四周的男生数量
            if (i > 0) cnt += a[i - 1][j];
            if (i < n - 1) cnt += a[i + 1][j];
            if (j > 0) cnt += a[i][j - 1];
            if (j < n - 1) cnt += a[i][j + 1];
            // 如果四周男生数量不是偶数，不满足条件
            if (cnt % 2 != 0) return 0;
        }
    }
    // 所有位置都满足条件
    return 1;
}

// 计算改变的女生数量
int count() {
    int cnt = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            // 如果性别改变（从女生 0 变为男生 1），计数加 1
            if (c[i][j] != a[i][j]) cnt++;
        }
    }
    return cnt;
}

// 递归枚举第一行的可能情况
void dfs(int row) {
    // 已经处理完所有行
    if (row == n) {
        // 检查是否满足完美方阵条件
        if (check()) {
            int cnt = count();
            // 更新最少改变数量
            if (cnt < ans) ans = cnt;
        }
        return;
    }
    // 枚举第一行每个位置是否改变性别
    for (int i = 0; i < (1 << n); i++) {
        for (int j = 0; j < n; j++) {
            // 判断第 j 位是否为 1，若为 1 则改变性别
            if (i & (1 << j)) {
                c[row][j] = 1 - a[row][j];
            } else {
                c[row][j] = a[row][j];
            }
        }
        // 处理下一行
        dfs(row + 1);
    }
}

int main() {
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &a[i][j]);
        }
    }
    // 从第一行开始递归枚举
    dfs(0);
    // 如果没有找到解，输出 -1，否则输出最少改变数量
    if (ans == 0x3f3f3f3f) printf("-1\n");
    else printf("%d\n", ans);
    return 0;
}