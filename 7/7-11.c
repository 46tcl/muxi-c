#include <stdio.h>
int main(void)
{
    double sum1,sum2=0.0;
    float x;
    float y=0.0-0.01;//因为ｉ循环做了１０１次
        
        for(int i=0;i<=100;i++)
        {
            y += 0.01; 
                printf("x = %f ",y);
                sum1 += y;
            x = i/100.0; 
                printf("x = %f\n",x);
                sum2 += x;
        }
    printf("float型的和为：%f int型的和为：%f \n",sum1,sum2);
    return 0;
}