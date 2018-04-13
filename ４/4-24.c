/*输入一个整数，显示出输入整数层的金字塔形状
提示思路：第ｉ行显示（i－１）*2+1个'*'
第i行： 左边有a-i个空格,右边同样有a-i个空格*/
#include <stdio.h>
int main ()
{
    int a,b,i,j;
    printf("让我们来画一个金字塔．\n金字塔有几层：");scanf("%d",&a);
    
    for(i=1;i<=a;i++){
        for(j=1;j<=a-i;j++)
            putchar(' ');
        for(j=1;j<=(i-1)*2+1;j++)
            putchar('*');
        for(j=1;j<=a-i;j++)
            putchar(' ');
        putchar('\n');
    }
    
    return 0;

}