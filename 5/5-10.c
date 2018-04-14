/*求４＊３和３＊４矩阵的乘积*/
#include <stdio.h>
int main(void)
{
    int i,j,k;
    int x1[4][3]={0};
    int x2[3][4]={0};
    int x [4][4]={0};
    printf("请输入4*3矩阵的构成元素：\n"); 
    
    for(int i=0;i<4;i++)
    { 
        for(int j=0;j<3;j++)
        {
            printf("x1[%d][%d]:",i+1,j+1);
            scanf("%d",&x1[i][j]);
        
        }
    }

    printf("请输入3*4矩阵的构成元素：\n"); 
    for(int j=0;j<3;j++)
    {
        for(int k=0;k<4;k++)
        {
            printf("x2[%d][%d]:",j+1,k+1);
            scanf("%d",&x2[j][k]);
        }
    }

    for(int i=0;i<4;i++)
    {
        for(int k=0;k<4;k++)
        {
            for(int j=0;j<3;j++)
            x[i][k]+=x1[i][j]* x2[j][k];
        }
    }

    puts("乘积为：");
    for(int i=0;i<4;i++)
    {
        for(int k=0;k<4;k++)
        {
            printf("%4d",x[i][k]);
        }
        putchar('\n');
    }

    return 0;
}