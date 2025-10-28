#include<stdio.h>
  int main() {
    int W_a,W_b,C_a,C_b,T_a,T_b;
    printf("请输入A队伍的三项成绩（胜局数 净胜数 平局记录数），数据之间用空格：");
    scanf("%d %d %d",&W_a,&C_a,&T_a);
    printf("请输入B队伍的三项成绩（胜局数 净胜数 平局记录数），数据之间用空格,且平局记录数不可能为相同：");
    scanf("%d %d %d",&W_b,&C_b,&T_b);
    if(W_a>W_b) {
        printf("A队伍胜利");
    }
    else if (W_a<W_b) {
        printf("B队伍胜利");
    }
    else {
        if(C_a>C_b) {
            printf("A队伍胜利");
        }
        else if(C_a<C_b){
            printf("B队伍胜利");
        }
        else {
            if(T_a<T_b) {
                printf("A队伍胜利");
            }
            else {
                printf("B队伍胜利");
            }
        }
        

    }
    return 0;
  }