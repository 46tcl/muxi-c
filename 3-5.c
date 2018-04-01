#include <stdio.h>/*确认相等运算符和关系运算符的值*/
int main(void)
{
    int a,b;
    printf("请输入两个整数。\n");
    printf("整数A:");scanf("%d",&a);
    printf("整数B:");scanf("%d",&b);
    if (a==b)
        printf("相等运算符的值为：%d",1); 
    else 
        printf("关系运算符的值为：%d",0);
    return 0;
}