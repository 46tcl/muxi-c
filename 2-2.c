#include <stdio.h>
int main(void)
{
    int a,b,sum,t;
    printf("请输入两个整数：\n");
    printf("整数1："); scanf("%d",&a);
    printf("整数2："); scanf("%d",&b);
    sum=a+b;
    t=a*b;
    printf("它们的和是%d,积是%d",sum,t);
    return 0;
}