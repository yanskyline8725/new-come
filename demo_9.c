#include <stdio.h>

int main () {
    for (int i = 1; i <=50; i++) {
      
        if (i % 3== 0 || i % 2 != 0 ) {
            continue;
        }
        if (i > 40) {
            break;
        }
    printf("1到50之间的偶数且不被3整除的数据：%d\n", i);    
    }
    printf("需求达到，数据到达40,40后面的数据不再处理\n");
    return 0;
}