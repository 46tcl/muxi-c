/*以输入整数为边长的正方形*/
#include <stdio.h>
int main ()
{
    int a,i,j;
    printf("生成一个正方形\n正方形有几层：");scanf("%d",&a);
    for(i=1;i<=a;i++){
        for(j=1;j<=a;j++)
            putchar('*');
        putchar('\n');
    }
    return 0;

}