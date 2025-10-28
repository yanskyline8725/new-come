#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    // 存储每场比赛的胜者，15场比赛对应索引0-14
    char winners[15];
    
    // 第一轮8场比赛的初始对阵
    // 场序1-8分别是：A-B, C-D, E-F, G-H, I-J, K-L, M-N, O-P
    char round1_teams[8][2] = {
        {'A', 'B'},  // 场序1
        {'C', 'D'},  // 场序2
        {'E', 'F'},  // 场序3
        {'G', 'H'},  // 场序4
        {'I', 'J'},  // 场序5
        {'K', 'L'},  // 场序6
        {'M', 'N'},  // 场序7
        {'O', 'P'}   // 场序8
    };
    
    // 读取前8场比赛结果并确定胜者
    for (int i = 0; i < 8; i++) {
        char score[10];
        int home_goals, away_goals;
        
        // 读取比分，格式如"1-2"
        scanf("%s", score);
        
        // 解析比分
        sscanf(score, "%d-%d", &home_goals, &away_goals);
        
        // 确定胜者：进球多的队伍晋级
        if (home_goals > away_goals) {
            winners[i] = round1_teams[i][0];  // 主队胜
        } else {
            winners[i] = round1_teams[i][1];  // 客队胜
        }
    }
    
    // 第二轮4场比赛（场序9-12）
    // 对阵为：(1胜vs2胜), (3胜vs4胜), (5胜vs6胜), (7胜vs8胜)
    for (int i = 8; i < 12; i++) {
        char score[10];
        int home_goals, away_goals;
        int prev_index = (i - 8) * 2;  // 前一轮对应的索引
        
        scanf("%s", score);
        sscanf(score, "%d-%d", &home_goals, &away_goals);
        
        // 确定胜者
        if (home_goals > away_goals) {
            winners[i] = winners[prev_index];      // 前一场胜者胜
        } else {
            winners[i] = winners[prev_index + 1];  // 后一场胜者胜
        }
    }
    
    // 第三轮2场比赛（场序13-14）
    // 对阵为：(9胜vs10胜), (11胜vs12胜)
    for (int i = 12; i < 14; i++) {
        char score[10];
        int home_goals, away_goals;
        int prev_index = 8 + (i - 12) * 2;  // 前一轮对应的索引
        
        scanf("%s", score);
        sscanf(score, "%d-%d", &home_goals, &away_goals);
        
        // 确定胜者
        if (home_goals > away_goals) {
            winners[i] = winners[prev_index];      // 前一场胜者胜
        } else {
            winners[i] = winners[prev_index + 1];  // 后一场胜者胜
        }
    }
    
    // 决赛（场序15）
    // 对阵为：13胜vs14胜
    {
        char score[10];
        int home_goals, away_goals;
        
        scanf("%s", score);
        sscanf(score, "%d-%d", &home_goals, &away_goals);
        
        // 确定冠军
        if (home_goals > away_goals) {
            winners[14] = winners[12];  // 13场胜者胜
        } else {
            winners[14] = winners[13];  // 14场胜者胜
        }
    }
    
    // 输出冠军
    printf("%c\n", winners[14]);
    
    return 0;
}

 