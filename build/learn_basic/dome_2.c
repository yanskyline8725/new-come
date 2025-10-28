#include <stdio.h>
#include <math.h>


int main () {
    const float PI = 3.14;
    float s;
    s = PI*pow(5,2);
    int r = 5;
    printf("半径为%d的圆面积=%f\n",r, s);
    return 0;
}