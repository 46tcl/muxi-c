#include <stdio.h>
int mat_mul( const int a[4][3], const int b[3][4], int c[3][3])  
{
    int i,j,k;
    /*将两个矩阵相乘放入ｃ矩阵中*/
        for( i=0;i<3;i++)
        {
            for( j=0;j<3;j++)
            {
                for( k=0;k<4;k++)
                    c[i][j]+=a[k][i]*b[j][k];
            }
        }

        for( i=0;i<3;i++)
        {
            for( j=0;j<3;j++)
            {
                printf("%4d",c[i][j]);
            }
            putchar('\n');
        }
}
int main(void)
{
    int i,j,k;
    int a[4][3],b[3][4],c[3][3]={0};
    printf("请输入４行３列矩阵的所有元素：\n");
        for( i=0;i<4;i++)
        {
            for( k=0;k<3;k++)
            {
                printf("a[%d][%d]=",i,k);  
                scanf("%d",&a[i][k]);
            }
        }
    printf("请输入3行4列矩阵的所有元素：\n");
        for( k=0;k<3;k++)
        {
            for( j=0;j<4;j++)
            {
                printf("b[%d][%d]=",k,j);
                scanf("%d",&b[k][j]);
            } 
        }
    /*打印出ｃ数组*/
        printf("c数组存储的元素为:\n");
        mat_mul(a,b,c);
        putchar('\n');    
    return 0;
}