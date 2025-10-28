#include<stdio.h>

int main()
{
    int category;
    float price;
    category = 2;
    price = 299.9;
       switch (category) {
       case 1:
         if(price<500) {
         printf("该电子产品价格较低，无优惠/n");
         }
         else if (price<1000) {
         printf("该电子产品可享受5%%的优惠/n");
         }
         else if (price>=1000) {
         printf("该电子产品可享受10%%的优惠/n");
         }
       break;
       
       case 2:
    
         if (price<200) {
          printf("该服装价格较低，无优惠/n");
          }
         else if (price<500) {
          printf("该服装可享受8%%的优惠/n");
          }
         else if(price>=500) {
          printf("该服装可享受15%%的优惠/n");
          }
       break;
       
       default:
          printf("该产品不在优惠范畴中");
       break;
       }
        
    
}