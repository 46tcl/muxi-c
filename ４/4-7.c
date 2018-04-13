/*显示小于输入的整数的所有２的乘方*/
#include <stdio.h>
int main(void)

{
    int a,i=2;
    printf("请输入一个整数：");scanf("%d",&a);
    if (a<0)
        printf(" ");
    else
        printf("2 ");
    
    while(i<=(a/2))
    {
        i*=2;
        printf("%d ",i);
    }
    printf("\n");    
    return 0;
}