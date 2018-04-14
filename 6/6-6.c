#include <stdio.h>
void alert (int n)
{
    while(n-->0)
        putchar("\a");
}
int main(void)
{
    int i,n;
    printf("请输入响铃次数：");scanf("%d",&n);
    for(i=0;i<n;i++)
        alert (n);
    putchar('\n');
    return 0;
}