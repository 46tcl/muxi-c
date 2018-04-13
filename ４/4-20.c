/*为九九乘法表增加横纵标题
思路：第一行打印１－９
第i行打印i｜　i＊j++ */
#include <stdio.h>
int main(void)
{
    int i,j;
    printf("  |");
    for(i=1;i<=9;i++)
        printf("%3d",i);
        putchar('\n');
        printf("---------------------------------\n");
    for(i=1;i<=9;i++){
        printf("%d |",i);
            for(j=1;j<=9;j++)
            printf("%3d",i*j);
            putchar('\n');
    }
    return 0;
}