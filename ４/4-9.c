/*交替显示＋－，总个数等于输入的整数值，输入０以下的整数，什么也不显示*/
#include <stdio.h>
int main(void)
{
    int a,i;
    printf("正整数：");
    scanf("%d",&a);
    if(a>=0){
    for(i=0;i<a;i++)
        if(i%2==0)
            printf("+");
        else
            printf("-");
    putchar('\n');
    }
    return 0;
}