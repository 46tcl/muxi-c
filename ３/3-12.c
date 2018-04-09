#include <stdio.h>/*用switch判断数字的奇偶性*/
int main(void)
{
    int a;
    printf("请输入一个整数。");scanf("%d",&a);
    switch(a%2)
    {
    case 0 : printf("该整数是偶数");break;
    default :printf("该整数是奇数");break;
    }
    return 0;
}