/*换行输出整数个＊，当输入０以下的整数，什么也不显示*/
#include <stdio.h>
int main(void)
{
    int no;
    printf("正整数：");
    scanf("%d",&no);
    if(no>=0)
        {
            while(no-->=1){putchar('*');
            putchar('\n');
            }
        }
    return 0;
}