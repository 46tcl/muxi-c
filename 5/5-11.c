#include <stdio.h>
int main()
{
    int i,j;
    int a,b,sum;
    double avr;
    int tensu1[6][2];
    int sum1[6]={0};
    double avr1[6]={0};
    
    for(i=0;i<6;i++)
    {
        printf("请输入第%d名同学的成绩：\n",i+1);
        printf("语文：");
        scanf("%d",&tensu1[i][0]);
        printf("数学：");
        scanf("%d",&tensu1[i][1]);
    }
    
    for(i=0;i<6;i++){
        sum+=tensu1[i][0];
        avr=(double)sum/6;
    }
    
    for(i=0;i<6;i++){
        sum1[i]=tensu1[i][0]+tensu1[i][1];
        avr1[i]=sum1[i]/2.0;
    }

    printf("各门课程的总分是：%d\n平均分是：%.2f\n",sum,avr);
    for(i=0;i<6;i++)
        printf("第%d个学生的总分是：%d\n平均分是：%.2f\n.",i+1,sum1[i],avr1[i]);

    return 0;

}