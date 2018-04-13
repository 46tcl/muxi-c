/*显示该整数个＊，每五个换一次行*/
#include <stdio.h>
int main(void)
{
    int a,i;
    printf("显示多少个＊：");scanf("%d",&a);
    for(i=1;i<=a;i++){
        printf("*");
        if(i%5==0){
            printf("\n");
        }
    }
    printf("\n");
    return 0;
}