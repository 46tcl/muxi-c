/*升序显示小于输出值的所有正偶数*/
#include <stdio.h>
int main(void)
{
    int a,i;
    printf("请输入一个整数：");scanf("%d",&a);
    i=0;
    while (i<=(a-2))
        printf("%d",i+=2);
    printf("\n");    
    return 0;
}