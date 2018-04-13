/*分别显示直角在左上方和右上方的等腰直角三角形*/
/*直角在左上方
思路：i=1,ｉ++行，len-i+1个ｊ*/
/* #include <stdio.h>
int main ()
{
    int i,j,len;
    puts("生成直角在左上方的等腰直角三角形．");
    printf("短边：");scanf("%d",&len);
    for(i=1;i<=len;i++){
        for(j=1;j<=(len-i+1);j++) 
            putchar('*');
        putchar('\n');
    }
    return 0;
}
*/
/*直角在右上方
思路：i=0,i++行，*/
#include <stdio.h>
int main ()
{
    int i,j,len;
    puts("生成直角在右上方的等腰直角三角形．");
    printf("短边：");scanf("%d",&len);
    for(i=1;i<=len;i++){
        for(j=1;j<=i;j++)
            putchar(' ');/*显示ｉ-1个空格*/
        for(j=1;j<=(len-i+1);j++)
            putchar('*');/*每行显示len-i+1个＊　*/
        putchar('\n');
    }

    return 0;

}
