/*显示该整数值以下的所有奇数*/
#include <stdio.h>
int main ()
{
    int a,i;
    printf("整数值：");scanf("%d",&a);
    for(i=1;i<=a;i+=2)
        printf("%d ",i);
    printf("\n");
    return 0;

}