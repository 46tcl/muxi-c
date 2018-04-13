/*显示输入整数的所有约数以后，显示约数的个数*/
#include <stdio.h>
int main(void)
{
    int a,i,j;
    printf("整数值：");scanf("%d",&a);
    j=1;
    for(i=1;i<=a;i++){
        if(a%i==0){
            printf("%d",i);
            j++;
            printf("\n");
        }
    }
    printf("约数有%d个.\n",j);
    return 0;
}