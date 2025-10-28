 #include <stdio.h>
 #include <math.h>


 int main() {
     int result_1 =2+6/2;
     printf("result_1=%d\n", result_1);
     double result_2 = 2+10/8.0*3;
     printf("result_2=%f\n", result_2);
     int result_3 = pow(2,3);
     printf("2的3次方=%d\n", result_3);
     int a=-1;
     int b=-2;
     int c=3;
     double delta = b*b-4*a*c;
     double x_1 = (-b+sqrt(delta))/(2*a);
     double x_2 = (-b-sqrt(delta))/(2*a);
     printf("x1=%lf,x2=%lf\n", x_1, x_2);
     return 0;
     }