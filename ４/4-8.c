/*输入整数，显示该整数个＊，当输入的值小于１时不输出换行符*/
#include <stdio.h>
int main(void)
{
    int no;
    printf("正整数：");
    scanf("%d",&no);
    if(no>=1)
        {
            while(no-->=1){putchar('*');
            }
            putchar('\n');
        }
    
    return 0;
    
    
}