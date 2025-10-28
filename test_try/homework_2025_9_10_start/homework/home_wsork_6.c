#include <stdio.h>

int main() {
    double principal = 100000.0;  // 本金10万元
    int year = 5;                 // 投资期限5年
    int choice;

    printf("请选择投资方式：\n");
    printf("1. 结构性存款（年化利率3.8%，保本+浮动收益）\n");
    printf("2. 公募REITs（年化收益约4.5%，底层为基建资产）\n");
    printf("3. 可转债基金（年化收益约6.2%，股债结合）\n");
    scanf("%d", &choice);

    double interest_rate = 0;
    switch (choice) {
        case 1:
            interest_rate = 0.038;
            break;
        case 2:
            interest_rate = 0.045;
            break;
        case 3:
            interest_rate = 0.062;
            break;
        default:
            printf("无效选择！\n");
            return 1;
    }

    // 复利计算：本息和 = 本金 × (1 + 年化利率)^年数
    double total = principal;
    for (int i = 0; i < year; i++) {
        total = total * (1 + interest_rate);
    }

    double profit = total - principal;
    printf("五年后收益：%.2f元\n", profit);
    printf("五年后本息和：%.2f元\n", total);

    return 0;
}