#include<stdio.h>
#include<string.h>  // 后面会用到清空数组的函数，先包含进来

int main() {
    int n;  // 存储居民总数
    int i, j;  // 循环中用的变量（计数用）
    
    // 注意：你原来写的int people[i];有问题，因为i还没赋值，不能用来定义数组大小
    // 先获取居民数量，再定义存储朋友信息的数组会更合理
    
    printf("请输入小A国的居民数： \n");  // 这里补全了分号
    scanf("%d", &n);  // 读取居民总数n
    
    // 定义二维数组存储每个居民的朋友：
    // friends[i][0] 表示第i个居民的朋友数量
    // friends[i][1]~friends[i][x] 表示第i个居民的具体朋友编号
    // 因为居民编号是1~n，所以数组大小设为(n+1)行（方便对应编号），每行最多1000个朋友（足够用）
    int friends[n+1][1000];  // n+1是为了让居民编号和数组下标对应（1~n）
    
    // 读取每个居民的朋友信息
    // 循环从1开始（因为居民编号是1~n），到n结束
    for(i = 1; i <= n; i++) {  // 修正了for循环的语法：用分号分隔，去掉了多余的分号
        printf("请输入第%d个居民的朋友数量和朋友编号（用空格分开）：\n", i);
        // 先读取第i个居民的朋友数量，存到friends[i][0]
        scanf("%d", &friends[i][0]);
        
        // 再读取这个居民的所有朋友编号，存到friends[i][1]及后面
        for(j = 1; j <= friends[i][0]; j++) {
            scanf("%d", &friends[i][j]);  // 第j个朋友的编号
        }
    }
    
    // 计算每个居民的意义值：朋友数 + 朋友的朋友数（去重，且排除自己）
    int result[n+1];  // 存储每个居民的意义值
    
    // 遍历每个居民，计算他们的意义值
    for(i = 1; i <= n; i++) {
        // 定义一个标记数组：visited[编号] = 1表示该编号已被统计，0表示未统计
        // 用来避免重复计数（比如A的两个朋友都有同一个朋友B，B只算一次）
        int visited[n+1];
        memset(visited, 0, sizeof(visited));  // 初始化为0（全部未统计）
        
        int count = 0;  // 记录当前居民的意义值
        
        // 第一步：统计直接朋友（朋友）
        for(j = 1; j <= friends[i][0]; j++) {
            int direct_friend = friends[i][j];  // 第i个居民的第j个直接朋友
            if(visited[direct_friend] == 0) {  // 如果这个朋友没被统计过
                visited[direct_friend] = 1;  // 标记为已统计
                count++;  // 计数+1
            }
        }
        
        // 第二步：统计朋友的朋友（排除自己）
        for(j = 1; j <= friends[i][0]; j++) {
            int direct_friend = friends[i][j];  // 先拿到直接朋友
            
            // 再遍历这个直接朋友的所有朋友（即朋友的朋友）
            for(int k = 1; k <= friends[direct_friend][0]; k++) {
                int indirect_friend = friends[direct_friend][k];  // 朋友的朋友
                
                // 条件：1. 不是自己；2. 没被统计过
                if(indirect_friend != i && visited[indirect_friend] == 0) {
                    visited[indirect_friend] = 1;  // 标记为已统计
                    count++;  // 计数+1
                }
            }
        }
        
        result[i] = count;  // 保存当前居民的意义值
    }
    
    // 输出所有居民的意义值
    printf("每个居民的意义值为：\n");
    for(i = 1; i <= n; i++) {
        printf("%d ", result[i]);
    }
    printf("\n");  // 换行
    
    return 0;
}