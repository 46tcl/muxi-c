/*顺次为数组中的元素赋值54321*/
#include <stdio.h>
int main(void)
{
    int i;
    int v[5];/*int[5]数组*/

    for(i=0;i<5;i++)
        v[i]=5-i;/*为数组赋值*/
    
    for(i=0;i<5;i++)
        printf("v[%d]=%d\n",i,v[i]);/*显示元素的值*/

    return 0;
}