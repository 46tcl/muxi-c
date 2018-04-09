#include <stdio.h>/*读取两个整数，前者是后者的百分之几*/
int main(void)
{
    int a,b;
    printf("请输入两个整数\n");
    printf("整数a:");scanf("%d",&a);
    printf("整数b:");scanf("%d",&b);
    printf("a是b的%d%%",(a*100)/b);
    return 0;
}