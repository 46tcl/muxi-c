#include <stdio.h>/*判断三个数字是否相等，使用逻辑运算符编程*/
int main(void)
{
    int a,b,c;
    printf("请输入三个整数：\n");
    printf("整数A："); scanf("%d",&a);
    printf("整数B："); scanf("%d",&b);
    printf("整数C："); scanf("%d",&c);
    if(a==b&&b==c)
        printf("三个值都相等。");
    else if(a==b||b==c||a==c)
        printf("有两个值相等。");
    else
        printf("三个值各不相同。");
    return 0;
}