# include <stdio.h>
 int main () {
     char category;
     float price;
     printf ("商品类别有A-电子产品，B-服装\n,请输入商品类别和价格（如A 1000）:\n"); 

     scanf( " %c %f",&category,&price);
     
     
     switch (category) {
       case 'A':
         if(price<500) {
         printf("该电子产品价格较低，无优惠\n");
         }
         else if (price<1000) {
         printf("该电子产品可享受5%%的优惠\n");
         }
         else  {
         printf("该电子产品可享受10%%的优惠\n");
         }
       break;
       
       case 'B':
    
         if (price<200) {
          printf("该服装价格较低，无优惠\n");
          }
         else if (price<500) {
          printf("该服装可享受8%%的优惠\n");
          }
         else {
          printf("该服装可享受15%%的优惠\n");
          }
       break;
       
       default:
          printf("该产品不在优惠范畴中");
       break;
       }
    }  