#include <stdio.h>

// 华氏度转摄氏度函数
float toCelsius(float fahrenheit) {
  return (5.0 / 9.0) * (fahrenheit - 32.0);
}

int main() {
  // 设置华氏温度值
  printf("华氏温度转摄氏度器，请输入华氏温度:\n");
  float f_value ;
  scanf("%f",&f_value );
  // 调用转换函数
  float result = toCelsius(f_value);
  // 输出转换结果
  printf("华氏度转摄氏度: %.2f\n", result);

  return 0;
}