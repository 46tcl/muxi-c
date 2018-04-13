/*使用对象宏来定义元素个数，注意要找到有关元素交换次数的规则*/
#include <stdio.h>
#define NUMBER 7
int main()
{
    int i;
    int x[NUMBER];

    for(i=0;i<NUMBER;i++){
        printf("x[%d]:",i);scanf("%d",&x[i]);
    }

    for(i=0;i<3;i++){
        int tem=x[i];
        x[i]=x[6-i];
        x[6-i]=tem;
    }
    puts("倒序排列了．");
    for(i=0;i<NUMBER;i++)
        printf("x[%d]=%d\n",i,x[i]);
    return 0;

}