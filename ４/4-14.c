/*使用ｆｏｒ循环显示１２３４５６７８９０，显示的位数和数入的整数值相同*/
/*思路：当整数小于９时，按照循环ｉ＋＋正常输出．
当ａ＞＝１０的时候，就可以按照０１２３４５６７８９的输出，那么就把输入的整数减去９，之后每次都减去１０*/
#include <stdio.h>
int main(void)
{
    int a,i,b;
    printf("请输入一个整数：");scanf("%d",&a);
    b=1;
    for(i=0;i<a;i++){
        printf("%d",b);
        b++;
        if(b>9)
            b-=10;

    }
    printf("\n");
    return 0;
}