#include <stdio.h>
#define NUMBER 5
void  rev_intary(int v[],int n)
{
    int i;

    for(i=n-1;i>=0;i--)
        printf("v[%d]=%d \n",i,v[i]);
}
int main(void)
{
    int i;
    int v[NUMBER]={0};
    printf("请输入有%d个元素的数组的值：\n",NUMBER);
        for(i=0;i<NUMBER;i++)
        {
            printf("v[%d]=",i);
            scanf("%d",&v[i]);
        }
            
    printf("交换后的数组为：\n");  rev_intary( v, 5 ) ;putchar('\n');
    
    return 0;
}