#include <stdio.h>/*整型与浮点型运算*/
int main(void)
{
    int a;
    double b,sum,t,x,y;
    printf("请输入一个整数：");scanf("%d",&a);
    printf("请输入一个小数：");scanf("%lf",&b);
    sum=a+b;
    t=a-b;
    x=a*b;
    y=a/b;
    printf("两数的和是：%f，差是：%f,积是：%f,商是：%f",sum,t,x,y);
    return 0;
}