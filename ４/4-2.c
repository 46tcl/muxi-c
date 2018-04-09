#include <stdio.h>/*读取两个整数的值，然后计算它们之间所有整数的和*/
int main(void)
{
    int a,b,min,max,sum=0;
    printf("请输入两个整数。\n");
    printf("整数a:");scanf("%d",&a);
    printf("整数b:");scanf("%d",&b);
    min=a<b?a:b;
    max=a>b?a:b;
    do{
        sum=min+sum;
        min=min+1;
    }
    while(min<=max);
    printf("大于等于%d小于等于%d的所有整数的和是%d.\n",min,max,sum);
    return 0;
}