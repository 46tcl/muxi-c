/*读取一个正整数，显示其位数*/
#include <stdio.h>
int main(void)

{
    int a,b,i=0;
    /*用一个do的语句保证输入的值为正数*/
    do {
        printf("请输入一个正整数:");scanf("%d",&a);
    b=a;
        if (a <= 0)
            printf("\a请不要输入非正整数．\n");
    }while(a<=0);
    /*a>0时*/
    printf("%d的位数是",b) ;
    while(a>0)
    {
        a%10; /*显示最后一位数*/
        a /= 10;/*右移一位*/
        i++;            
    } 
    printf("%d",i);
    puts(".");
    return 0;
}