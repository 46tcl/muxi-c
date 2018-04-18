/*从键盘输入各种数据类型的变量并显示其值*/
#include <stdio.h>
int main(void)
{
    float a;
    double b;
    long double c;
    printf("请输入一个小数(float型)："); scanf("%f",&a);
    printf("请输入一个小数(double型："); scanf("%lf",&b);
    printf("请输入一个小数(long double型)："); scanf("%Lf",&c);
    printf("三个小数的值分别为：\n%f\n%lf\n%Lf\n",a,b,c);
    return 0;
}