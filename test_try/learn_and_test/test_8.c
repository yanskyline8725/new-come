#include <stdio.h>

int main() {
  int matrix[4][4] = { {1, 4, 2}, {3, 6, 8}, {5, 7, 9}, {10, 12, 11} };

  int i, j;
  for (i = 0; i < 4; i++) {
    for (j = 0; j < 4; j++) {
      printf("该数据中第%d行第%d列数为：%d\n",i+1,j+1,matrix[i][j]);
    }
  }
  
  return 0;
}