/*读取数据中的数据个数和元素值并显示．用对象宏声明数组的元素个数*/
#include <stdio.h>
int main(void)
#define NUMBER 20  
{
    int i,j;
    int num;    /*实际的数据个数*/
    int tense[NUMBER];
    printf("数据个数：");scanf("%d",&num); 
      
    for(i=0;i<num;i++)
    {
        printf("%d号:",i+1);
        scanf("%d",&tense[i]);
    }
    
    printf("{");
    
    for(i=0;i<num;i++) 
    {
        if(i!=num-1)
            printf("%d,",tense[i]);
        else 
            printf("%d}",tense[i]);
    }
    return 0;

}