#include<stdio.h>
#include<math.h>
   int main() {
         long long N;
            scanf("%lld", &N);
            int maxLen = 0;
            int start = 0;
            for (int i = 2; i <= sqrt(N); i++) {
            long long product = 1;
               int j=i;  
               while (product < N) {
                  product *= j;
                  if(product > N) {
                     break;
                  }
                  if(N % product ==0) {
                     int len = j - i + 1;
                     if (len > maxLen) {
                        maxLen = len;
                        start = i;
                     }
                  }
                  j++;

               }
            }
         if (maxLen == 0) {
            printf("1\n%lld\n",N);
         }
         else {
            printf("%d\n",maxLen);
            for (int i=0;i < maxLen;i++) {
               if(i !=0) {
                  printf("*");
            }   
              printf("%d",start + i);
         }
         }
         return 0;
      }