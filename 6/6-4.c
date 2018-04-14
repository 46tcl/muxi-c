#include <stdio.h>
int spr4 (int x)
{
    return x*x*x*x;
}
int main(void)
{
    int x;
    printf("请输入一个整数：");scanf("%d",&x);
    printf("%d的四次幂是：%d.\n",x,spr4(x));
    return 0;
}