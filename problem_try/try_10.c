#include<stdio.h>
int main() {
    // 用数组存储拼音，索引对应数字，更简洁（替代多个单独变量）
    char *num_pinyin[] = {"ling", "yi", "er", "san", "si", "wu", "liu", "qi", "ba", "jiu"};
    char *fu = "fu";
    int a;
    
    // 修正1：用%d读取整数，而非%c
    scanf("%d", &a);
    
    // 处理负数
    if(a < 0) {
        printf("%s ", fu);
        a = -a; // 转为正数处理（注意：a=-2147483648时，-a会溢出，需用long long，此处按常规int处理）
    }
    
    // 处理0（单独处理，避免循环漏判）
    if(a == 0) {
        printf("%s\n", num_pinyin[0]);
        return 0; // 直接结束，无需进入循环
    }
    
    // 修正2：找到输入数字的最高位，避免前置零
    int highest = 1; // 存储最高位的权重（如输入123，highest=100）
    while(a / highest >= 10) {
        highest *= 10;
    }
    
    // 从最高位到个位，依次输出每个数字的拼音
    for(int i = highest; i >= 1; i /= 10) {
        int digit = (a / i) % 10;
        printf("%s ", num_pinyin[digit]);
    }
    printf("\n"); // 换行，使输出更规范
    
    return 0;
}