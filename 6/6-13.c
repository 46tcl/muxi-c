#include <stdio.h>
void exam2_add( const int a[2][4][3], int sum[4][3])
{
    int i,j,k;
    for( i=0;i<4;i++)
    {
        for( j=0;j<3;j++)
        {
            for( k=0;k<2;k++)
            {
                sum[i][j]+=a[k][i][j];
            }
        }
    }
    printf("总分\n");
    for( i=0;i<4;i++)
    {
        for( j=0;j<3;j++)
        {
            printf("%4d",sum[i][j]);
        }
        putchar('\n');
    }
}
int main(void)
{
    int i,j,k;
    int sum[4][3]={0};
    int a[2][4][3]={{{91,63,78},{67,72,46},{89,34,53},{32,54,34}},{{97,67,82},{73,43,46},{97,56,21},{85,46,35}}};
    
    for ( k = 0; k < 2; k++)
    {
        printf("第%d次考试的分数\n",k+1 );
        for ( i = 0; i < 4; i++)
        {
            for ( j = 0; j < 3; j++)
                printf("%4d",a[k][i][j] );
            printf("\n");
        }
    }
    exam2_add(a,sum);
    return 0;
}