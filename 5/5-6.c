/*a double型，b int型，经过a=b=1的赋值以后，a,b,的值分别是多少*/
#include <stdio.h>
int main(void)
{
    double a;
    int b;
    a=b=1;
    printf("a的值是：%.2f  b的值是：%d\n",a,b);
    
    return 0;
}