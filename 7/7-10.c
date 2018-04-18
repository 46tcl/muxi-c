//循环判断基准所使用的变量应为整数而不要用浮点数
//横向显示ｆｌｏａｔ型变量以０．０１为单位从０．０递增到１．０，以及ｉｎｔ型变量０－＞１００，再除以１００．０的过程
#include <stdio.h>
int main(void)
{
    float x;
    float y=0.0-0.01;//因为ｉ循环做了１０１次
        
        for(int i=0;i<=100;i++)
        {
            y += 0.01; 
                printf("x = %f ",y);
            x = i/100.0; 
                printf("x = %f\n",x);
        }
    return 0;
}