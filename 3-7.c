#include <stdio.h>/*输出四个数当中的最大值*/
int main(void)
{
    int a,b,c,d,max;
    printf("请输入四个整数：\n");
    printf("整数1："); scanf("%d",&a);
    printf("整数2："); scanf("%d",&b);
    printf("整数3："); scanf("%d",&c);
    printf("整数4："); scanf("%d",&d);
    max=a;
    if (a < b) max=b;
    if (a < c) max=c;
    if (a < d) max=d;
    printf("四个整数中最大的数是：%d",max);
}