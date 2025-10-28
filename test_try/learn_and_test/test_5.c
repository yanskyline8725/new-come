#include <stdio.h>

int main() {
  int myNumbers[] = {10, 25, 50, 75, 100};
  int length = sizeof(myNumbers) / sizeof(myNumbers[4]);
  
  printf("%d", length);
  return 0;
}