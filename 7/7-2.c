#include <stdio.h>
#include <limits.h>
int main(void)
{
    unsigned int x;
    do
    {
        printf("请输入一个非负整数：");scanf("%u",&x );

        if( x > UINT_MAX || x < 1e-6)
            printf("输入的数发生高位溢出，请重新输入");
        else
            {
                printf("x左移1位的数为：%u．乘以2的一次指数幂的值为：%u.\n",x << 1 , x * 2);
                printf("x右移1位的数为：%u．除以2的一次指数幂的值为：%u.\n",x >> 1 , x / 2);
            }
    }while(x > UINT_MAX || x < 1e-6);
    return 0;
}