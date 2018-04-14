#include <stdio.h>
# define NUMBER 5
int min_of (const int v[],int n)
{
    int i;
    int min = v[0];
    
    for(i=0;i<n;i++)
        if(v[i]<min)
            min=v[i];
    return min;
}

int main(void)
{
    int i;
    int v[NUMBER]={1,2,3,4,5};
    printf("数组中的最小值是：%d\n", min_of(v,NUMBER));
    return 0;
}