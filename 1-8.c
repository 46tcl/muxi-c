#include <stdio.h>/*计算两个数字的乘积*/
int main(void)
{
    int a,b,t;
    printf("请输入两个整数：\n");
    printf("整数1："); scanf("%d",&a);
    printf("整数2："); scanf("%d",&b);
    t=a*b;
    printf("它们的乘积是%d",t);
    return 0;
}