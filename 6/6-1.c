#include <stdio.h>
int min2 (int a, int b)
{
    return (a<b)?a:b;
}

int main(void)
{
    int a,b;
    printf("请输入两个整数：");
    printf("整数1：");
    scanf("%d",&a);
    printf("整数2：");
    scanf("%d",&b);
    printf("两数中较小的数是:%d.\n",min2 (a,b));
    return 0;
}