#include <stdio.h>
#include <ctype.h>  // 新增：引入字符处理库，用于大小写转换函数

int main() {
    char category;
    float price;
    
    // 修改1：修正原输出提示中的括号错误，并明确输入格式要求
    printf("请输入产品类别(A表示电子产品,B表示服装)和价格，中间用空格隔开："); 
    
    // 修改2：合并输入语句，确保类别和价格输入同步
    // 原代码使用两个scanf分开读取，可能导致输入不同步
    // 新增：添加输入验证，确保正确读取两个值
    if (scanf("%c %f", &category, &price) != 2) {
        printf("输入格式错误，请重新运行程序并按照提示输入\n");
        return 1;  // 输入错误时返回非0值，表示程序异常结束
    }
    
    // 修改3：新增大小写转换功能，支持小写a/b输入
    // 解决原代码只能识别大写字母的问题
    category = toupper(category);
    
    switch (category) {
        case 'A':
            // 修改4：明确条件区间，使用else简化最后一个条件
            // 原代码最后一个条件用else if(price>=1000)，逻辑冗余
            if (price < 500.0f) {  // 新增：添加.0f明确浮点数类型
                printf("该电子产品价格较低，无优惠\n");  // 修改5：将/n改为正确的换行符\n
            }
            else if (price < 1000.0f) {
                printf("该电子产品可享受5%%的优惠\n");
            }
            else {  // 覆盖所有>=1000的情况，包括极大值
                printf("该电子产品可享受10%%的优惠\n");
            }
            break;
        
        case 'B':
            // 同A类产品的逻辑优化
            if (price < 200.0f) {
                printf("该服装价格较低，无优惠\n");
            }
            else if (price < 500.0f) {
                printf("该服装可享受8%%的优惠\n");
            }
            else {  // 覆盖所有>=500的情况，包括极大值
                printf("该服装可享受15%%的优惠\n");
            }
            break;
        
        default:
            // 修改6：新增换行符，使输出格式统一
            printf("该产品不在优惠范畴中\n");
            break;
    }
    
    // 修改7：新增return语句，符合int main()的标准返回要求
    return 0;
}
