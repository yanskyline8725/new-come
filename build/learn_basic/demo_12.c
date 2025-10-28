#include<stdio.h>
 
int main() {
    char ch = 'A';
    char *ch_ptr = &ch;
    printf("目前ch = %c\n", ch);
    *ch_ptr = 'B';
    printf("修改后ch = %c\n", *ch_ptr);
}