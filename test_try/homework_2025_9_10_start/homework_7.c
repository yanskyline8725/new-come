#include<stdio.h>
  int main() {
    char thief;
    
    for(thief='A';thief<='C';thief++) {
        int true_count=0;
        if(thief=='B') true_count++;
        if(thief=='C') true_count++;
        if(thief!='C') true_count++;

    if(true_count==1) {
        printf("The thief is %c\n",thief);
    }
  }
}
