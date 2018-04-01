#include <stdio.h>/*计算标准体重的转化公式*/
int main(void)
{
    int a;/*输入身高的整数值*/
    double b;
    printf("请输入你的身高：");scanf("%d",&a);
    b=((double)a-100)*0.9;
    printf("您的标准体重是：%5.1f公斤。",b);
    return 0;
}