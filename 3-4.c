#include <stdio.h>/*判断两个数是否相等*/
int main(void)
{
    int a,b;
    printf("请输入两个整数。\n");
    printf("整数A:");scanf("%d",&a);
    printf("整数B:");scanf("%d",&b);
    
    if (a > b)
        printf("A大于B。");
    else if (a < b)
        printf("A小于B。");
    else
        printf("A和B相等");
    return 0;
}