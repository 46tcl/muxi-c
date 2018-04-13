/*从一开始递增至输入的整数，输入的值小于零时不换行*/
#include <stdio.h>
int main(void)
{
    int a,i;
    printf("请输入一个正整数：");scanf("%d",&a);
    i=1;
    while (i<=a)
        printf("%d",i++);
    if (a>=0)
        printf("\n");
    else
        printf(" ");
    return 0;
}
