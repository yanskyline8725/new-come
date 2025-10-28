#include<stdio.h>
#include<math.h>
   
  int main() {
        int a,b,c;
        scanf("%d %d %d",&a,&b,&c);
        if(a+b<=c || a+c<=b || b+c<=a){
            printf("These sides do not correspond to a valid triangle");
        }
        else{  float s=(a+b+c)/2.0;
            float area=sqrt(s*(s-a)*(s-b)*(s-c));
            float perimeter=a+b+c;
            printf("area = %.2f; perimeter = %.2f",area,perimeter);
            
        }
        return 0;
}