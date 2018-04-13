/*显示结果的同时逆向显示输入的整数值*/
#include <stdio.h>
int main(void)

{
    int a,b;
    do {
        printf("请输入一个正整数:");scanf("%d",&a);
        b=a;
        if (a <= 0)
            printf("\a请不要输入非正整数．\n");
    }while(a<=0);
    /*a>0时*/
    printf("%d逆向显示的的结果是",b);  
    while(a>0)
    {
        printf("%d",a%10); /*显示最后一位数*/
        a /= 10;            /*右移一位*/
    } 
    
    puts(".");
    return 0;
}