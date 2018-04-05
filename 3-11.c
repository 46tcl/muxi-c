#include <stdio.h>
int main(void)/*判断两个数字的差与１０的大小比较*/
{
    int a,b,s;
    printf("请输入两个整数．\n");
    printf("整数A:");scanf("%d",&a);
    printf("整数B:");scanf("%d",&b);

    s=a-b;
    if ( s<10 && s==10)
        printf("它们的差小于等于10.");
    else
        printf("它们的差大于等于11.");
    return 0;
}