#include <stdio.h>/*输入三个数字当中的最小值*/
int main(void)
{
    int a,b,c,min;
    printf("请输入三个整数：\n");
    printf("整数1："); scanf("%d",&a);
    printf("整数2："); scanf("%d",&b);
    printf("整数3："); scanf("%d",&c);
    min=a;
    if (a > b) min=b;
    if (a > c) min=c;
    printf("三个整数中最小的数是：%d",min);
    return 0;
}