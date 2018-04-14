#include <stdio.h>
int sumup (int n)
{
    int i,sum;
    for(i=1;i<=n;i++)
        sum+=i;
    return sum;
}

int main(void)
{
    int n;
    printf("请输入ｎ的值：");scanf("%d",&n);
    printf("1到%d之间所有整数的和为：%d.\n",n,sumup(n));
    return 0;
}