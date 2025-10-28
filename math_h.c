/*C 语言数学函数
<math.h> 库提供了许多函数，允许你对数字执行数学运算。

函数	描述
acos(x)	返回 x 的反余弦值，以弧度计。
acosh(x)	返回 x 的双曲反余弦值。
asin(x)	返回 x 的反正弦值，以弧度计。
asinh(x)	返回 x 的双曲反正弦值。
atan(x)	返回 x 的反正切值，数值范围在 -PI/2 到 PI/2 弧度之间。
atan2(y, x)	返回将直角坐标 (x, y) 转换为极坐标 (r, theta) 时的角度 theta。
atanh(x)	返回 x 的双曲反正切值。
cbrt(x)	返回 x 的立方根。
ceil(x)	返回向上舍入到最接近整数的 x 值。
copysign(x, y)	返回具有第二个浮点数 y 符号的第一个浮点数 x。
cos(x)	返回 x 的余弦值（x 以弧度计）。
cosh(x)	返回 x 的双曲余弦值。
exp(x)	返回 Ex 的值。
exp2(x)	返回 2x 的值。
expm1(x)	返回 ex-1 的值。
erf(x)	返回 x 处的误差函数值。
erfc(x)	返回 x 处的互补误差函数值。
fabs(x)	返回 x 的绝对值。
fdim(x, y)	返回 x 和 y 之间的正差值。
floor(x)	返回向下舍入到最接近整数的 x 值。
fma(x, y, z)	返回 x*y+z 的值，且不会丢失精度。
fmax(x, y)	返回浮点数 x 和 y 中的最大值。
fmin(x, y)	返回浮点数 x 和 y 中的最小值。
fmod(x, y)	返回 x/y 的浮点余数。
frexp(x, y)	将 x 表示为 m*2^n，返回 m 的值（介于 0.5 和 1.0 之间的值）。
hypot(x, y)	返回 sqrt(x2 + y2)，避免中间结果溢出或下溢。
ilogb(x)	返回 x 的浮点基数对数的整数部分。
ldexp(x, y)	返回 x*2^y 的值。
lgamma(x)	返回 x 处 gamma 函数绝对值的对数。
llrint(x)	将 x 舍入到附近的整数，并以 long long 整型返回结果。
llround(x)	将 x 舍入到最近的整数，并以 long long 整型返回结果。
log(x)	返回 x 的自然对数。
log10(x)	返回 x 的以 10 为底的对数。
log1p(x)	返回 x+1 的自然对数。
log2(x)	返回 x 绝对值的以 2 为底的对数。
logb(x)	返回 x 绝对值浮点基数对数的值。
lrint(x)	将 x 舍入到附近的整数，并以 long 整型返回结果。
lround(x)	将 x 舍入到最近的整数，并以 long 整型返回结果。
modf(x, y)	返回 x 的小数部分，并将整数部分写入指针 y 所指向的内存。
nan(s)	返回 NaN（非数字）值。
nearbyint(x)	返回舍入到附近整数的 x 值。
nextafter(x, y)	返回朝向 y 方向的离 x 最近的浮点数。
nexttoward(x, y)	（与 nextafter 功能相同）返回朝向 y 方向的离 x 最近的浮点数。
pow(x, y)	返回 x 的 y 次幂的值。
remainder(x, y)	返回 x/y 舍入到最近整数的余数。
remquo(x, y, z)	计算 x/y 舍入到最近整数的结果，将结果写入指针 z 所指向的内存，并返回余数。
rint(x)	返回舍入到附近整数的 x 值。
round(x)	返回舍入到最近整数的 x 值。
scalbln(x, y)	返回 x*R^y 的值（R 通常为 2）。
scalbn(x, y)	（与 scalbln 功能相同）返回 x*R^y 的值（R 通常为 2）。
sin(x)	返回 x 的正弦值（x 以弧度计）。
sinh(x)	返回 x 的双曲正弦值。
sqrt(x)	返回 x 的平方根。
tan(x)	返回 x 的正切值（x 以弧度计）。
tanh(x)	返回 x 的双曲正切值。
tgamma(x)	返回 x 处 gamma 函数的值。
trunc(x)	返回 x 的整数部分。*/
