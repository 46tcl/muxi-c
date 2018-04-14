#include <stdio.h>
#define NUMBER 5
void intary_rcpy (int v1[] , const int v2[] , int n)
{
    int i;
    printf("数组1为倒序后的数组：\n");
    for(i=0;i<n;i++)
    {
        v1[i]=v2[n-1-i];
        printf("%4d",v1[i]);
    }
}

int main(void)
{
    int v1[NUMBER],v2[NUMBER];
    
    printf("请输入数组２的%d个元素\n",NUMBER);
        for(int i=0;i<NUMBER;i++)
        {
            printf("v２[%d]=",i);
            scanf("%d",&v2[i]);
        }
        
        printf("数组２的值为：\n");
        for(int i=0;i<NUMBER;i++)
            printf("%4d",v2[i]);
        putchar('\n');

        intary_rcpy (v1 ,v2 ,NUMBER);
    return 0;
}