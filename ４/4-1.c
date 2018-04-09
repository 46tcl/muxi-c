#include <stdio.h>/*使用do-while语句，使得输入输出整数这一过程可以循环*/
int main(void)
{
    int a;
    int retry;
    
    do
    { 
        printf("请输入一个整数：");scanf("%d",&a);
        if (a == 0)
            printf("该整数为０．");
        else if (a>0)
            printf("该整数为正数．");
        else
            printf("该整数为负数");
        printf("是否继续？<Yes--0/No--9>");
        scanf("%d",&retry);
    }
    while(retry==0);
    return 0;
}