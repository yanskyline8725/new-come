#include<stdio.h>
#include<math.h>
int main() {
    int y_0, t_0; // 1. 中文逗号改为英文逗号
    printf("请输入初始恐慌值和追逐时间(整数)(中间用空格隔开)：");
    scanf("%d %d", &y_0, &t_0); // 补充&（取地址符，scanf必须加）
    
    double s = pow(y_0, t_0); // 2. s改为double类型，匹配pow返回值
    // 3. 修复printf的引号、分号和参数
    printf("在%d秒后，求生者的恐慌值为%.0f,", t_0, s); 
    // 4. 增加s==0的判断，修复正负逻辑
    if (s < 0) {
        printf("No,是负数");
    } else if (s == 0) {
        printf("既不是正数也不是负数");
    } else {
        printf("Yes,是正数");
    }
    // 5. 强制转换为int后判断奇偶
    if ((int)s % 2 == 0) {
        printf("，偶数\n");
    } else {
        printf("，奇数\n");
    }
    
    return 0;
}