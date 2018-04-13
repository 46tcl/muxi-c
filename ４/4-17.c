/*显示１到ｎ的整数值的二次方*/
#include <stdio.h>
int main()
{
    int a,b,i;
    printf("n的值：");scanf("%d",&a);
    for(i=1;i<=a;i++){
        b=i*i;
        printf("%d的二次方是%d",i,b);
        printf("\n");
    }
    
    return 0;
}