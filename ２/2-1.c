#include <stdio.h>/*判断前者数字是后者数字的百分之几*/
int main(void)
{
    int x,y;
    printf("请输入两个整数：\n");
    printf("整数x："); scanf("%d",&x);
    printf("整数y："); scanf("%d",&y);
    printf("x的值是y的%d%%",(x*100)/y);
    return 0;
}