/*编写一段程序，显示输入整数层的向下的金字塔形状，第ｉ行显示i%10的结果
思路：第ｉ行有（a-i＋１）*2+1个数字
第i行： 左边有i-1个空格,右边同样有i-1个空格*/
#include <stdio.h>
int main ()
{
    int a,i,j;
    printf("让我们来画一个向下的金字塔．\n金字塔有几层：");scanf("%d",&a);

    for(i=1;i<=a;i++){
        for(j=1;j<=i-1;j++)
            putchar(' ');
        for(j=1;j<=(a-i)*2+1;j++)
            printf("%d",i%10);
        for(j=1;j<=i-1;j++)
            putchar(' ');
        putchar('\n');
    }
    return 0;

}