/*纵向显示５－８的分布图*//*未完成*/
#include <stdio.h>
#define NUMBER 20
int main(void)
{
    int i,j;
    int num;
    int tensu[NUMBER];
    int bunpu[11]={0};
    char star[3][11];

    printf("请输入学生人数：");

    do {
        scanf("%d",&num);
        if (num < 1 || num > NUMBER)
            printf("\a请输入１～%d的数：",NUMBER);
    } while(num < 1 || num > NUMBER);

    printf("请输入%d人的分数：\n",num);

    for(i = 0; i < num; i++)
    {
        printf("%2d号:",i+1);
        do {
            scanf("%d",&tensu[i]);
            if (tensu[i] < 0 || tensu[i] > 100)
                printf("\a请输入１～100的数：");
        }while(tensu[i] < 0 || tensu[i] > 100);
        bunpu[tensu[i]/10]++; 
    }
 
    puts("------------------分布图-------------------\n");
    
    for(i=0;i<11;i++)
        {
            
                if(bunpu[i]>=1)
                    star[2][i]='*';
                else
                    star[2][i]=' ';
                if(bunpu[i]>=2)
                    star[1][i]='*';
                else
                    star[1][i]=' ';
                if(bunpu[i]>=3)
                    star[0][i]='*';
    
            
        }
    
    for(j=0;j<3;j++)
    {
        for(i=0;i<11;i++)
        {
            printf("%c",star[j][i]);
        }
        putchar('\n');
    }

    
    puts("--------------------------------------------\n");

    for(i=0;i<11;i++)
        printf("%4d",i*10);

return 0;
}  