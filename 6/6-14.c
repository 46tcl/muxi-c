#include <stdio.h>
#define number 5
int main(void)
{
    int i;
    static double a[number];
    printf("double数组里的数是：\n");
    for( i = 0; i < number; i++)
        printf("a[%d]= %.1f\n",i,a[i]);
    return 0;
}