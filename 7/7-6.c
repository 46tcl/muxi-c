/*编写程序确认对无符号整数执行算数运算不会发生数据溢出*/
#include <stdio.h>
int main(void)
{
    unsigned n;
    printf("请输入一个非负整数：");
    scanf("%u",&n);
    do
    {
        if( n < 0)
            printf("请输入一个非负整数：");
        else
            printf("此次算数运算没有发生数据溢出，运算的结果为：%u\n",65535 + n);
    }while( n < 0);
    
    return 0;
}