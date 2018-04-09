/*对输入的整数进行倒数，倒数到１．当输入的值小于０时，不换行*/
#include <stdio.h>
int main(void)
{
    int a;
    printf("请输入一个正整数：");scanf("%d",&a);
    while (a>0)
        printf("%d",a--);
    
    if (a>=0)
        printf("\n");
    else
        printf("");
    return 0;
}
