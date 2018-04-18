/*ｘ右移ｎ位的值*/
/*#include <stdio.h>
unsigned rrotate(unsigned x,int n)
{
    printf("%u左移%d位的值为：%u",x,n,x >> n);
}
int main(void)
{
    unsigned int x;
    int n;
    printf("请输入一个非负整数：");
    scanf("%u",&x);
    printf("请输入要移动的位数：");
    scanf("%d",&n);
    rrotate(x,n);
    putchar('\n');
    return 0;
}
*/

/*ｘ左移ｎ位的值*/
#include <stdio.h>
unsigned lrotate(unsigned x,int n)
{
    printf("%u右移%d位的值为：%u",x,n,x << n);
}
int main(void)
{
    unsigned int x;
    int n;
    printf("请输入一个非负整数：");
    scanf("%u",&x);
    printf("请输入要移动的位数：");
    scanf("%d",&n);
    lrotate(x,n);
    putchar('\n');
    return 0;
}
