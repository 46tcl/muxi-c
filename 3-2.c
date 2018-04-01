#include <stdio.h>/*判断else变成else if的结果*/
int main(void)
{
    int no;

    printf("请输入一个整数：");
    scanf("%d",&no);

    if (no == 0)
        puts("该整数为0。");
    else if (no > 0)
        puts("该整数为正数。");
    else if (no < 0)
        puts("该整数为负数。");
    return 0;
}
/*当为else时，正常。当改成else if (no < 0)时，输出也正常*/