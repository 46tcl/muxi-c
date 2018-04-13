/*显示出一个横向较长的长方形，读取的两个数字中，较小的数为行数，较长的为列数
思路：需要先判断输入数值的大小，把小的数给a，大的数给ｂ*/
#include <stdio.h>
int main ()
{
    int a,b,min,max,i,j;
    printf("让我们来画一个长方形．\n一边：");scanf("%d",&a);
    printf("另一边：");scanf("%d",&b);
    min=a<b?a:b; 
    max=a<b?b:a;
    for(i=1;i<=min;i++){
        for(j=1;j<=max;j++)
            putchar('*');
        putchar('\n');
    }
    return 0;

}