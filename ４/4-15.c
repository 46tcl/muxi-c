/*显示身高和标准体重的对照表*/
#include <stdio.h>
int main ()
{
    int a,b,c,i;
    double d;
    printf("开始数值(cm):");scanf("%d",&a);
    printf("结束数值(cm):");scanf("%d",&b);
    printf("间隔数值(cm):");scanf("%d",&c);
    /*身高体重对照表printf("请输入你的身高：");scanf("%d",&a);
    b=((double)a-100)*0.9;
    printf("您的标准体重是：%5.1f公斤。",b);*/
    for(i=a;i<=b;i+=c){
        d=((double)i-100)*0.9;
        printf("%dcm",i);
        printf("    %5.2lfkg",d);
        printf("\n");
    }
    return 0;
}