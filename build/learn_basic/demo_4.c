#include <stdio.h>
#include <stdbool.h>
int main() {
int ueser_type = 0; // 1表示会员，0表示非会员
double price = 150; // 商品原价
if (ueser_type == 1) {
    if (price>200) {
        price = price*0.9;
    }
    else {
     price=price*0.97;}
    }
else {
    if (price > 100) {
        price = price * 0.95;
    } 
    }
printf("最终价格为%.2f\n",price);
return 0;
}
