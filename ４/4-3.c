#include <stdio.h>/*倒数一个整数至０，当输入的值为负数的时候不执行换行操作*/
int main(void)
{
    int no;
    printf("请输入一个正整数：");scanf("%d",&no);
    while(no>=0)
    {
        printf("%d ",no);
        no--;
    }
    if (no>=0)
        printf("\n");
    return 0;
}