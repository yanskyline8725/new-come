 # include <stdio.h>
 int main () {
    int i = 1;
    int sum_1 = 0;
    int sum_2 = 0;
    while (i <= 100) {
        if(i %2 == 0) {
            sum_1 = sum_1 + i;
        }
        i = i + 1;
    }
   printf("1到100之间的偶数和为：%d\n", sum_1);


 i = 1;
    do {
        if (i % 2 == 0) {
            sum_2 = sum_2 + i;
        }
        i = i + 1;
    }
    while (i <= 100);
    printf("1到100之间的偶数和为：%d\n", sum_2);
    return 0;
    }
     
    
