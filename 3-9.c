#include <stdio.h>/*用条件运算符替换if语句的程序*/
int main(void)
{
    int n1,n2;
    puts("请输入两个整数。");
    printf("整数1："); scanf("%d",&n1);
    printf("整数2："); scanf("%d",&n2);
    n1==n2?puts("它们相等。"):puts("它们不相等。");
    return 0;
}