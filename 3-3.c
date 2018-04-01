#include <stdio.h>/*输入一个值，输入它的绝对值*/
int main(void)
{
    int a;/*输出一个整数的绝对值*/
    printf("请输入一个整数：");scanf("%d",&a);

    if (a < 0)
        a=-a;
        printf("绝对值是%d。",a);
    return 0;
}