#include <stdio.h>
int main(void)/*计算输入的两个整数差值，用if语句替换条件运算符*/
{
    int a,b;
    printf("请输入两个整数：\n");
    printf("整数1："); scanf("%d",&a);
    printf("整数2："); scanf("%d",&b);
    if (a>b)
        printf("它们的差是：%d。",a-b);
    else
        printf("它们的差是：%d。",b-a);
    return 0;
}