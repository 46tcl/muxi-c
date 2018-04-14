/*将相同元素的下标存储在数组ｉｄｘ中，并且返回数组中和ｋｅｙ相等的元素的个数,*/
#include <stdio.h>
#define number 5
int search_idx ( const int v[], int idx[], int key, int n)
{
    int count=0;
    for( int i=0; i<n; i++)
        {
            if( v[i] == key )
                {   
                    idx[i] = i;
                    ++count;
                }
        }
    return count;
}
int main(void)
{
    int i;
    int v[number], idx[number]={0};
    int key;
    
    printf("请输入key的值：");scanf("%d",&key);
    printf("请输入%d个元素：\n",number);
    for( i=0; i<number; i++)
    {
        printf("v[%d]=",i);
        scanf("%d",&v[i]);
    }
        
    printf("与key相等的元素个数为：%d",search_idx ( v, idx, key, number));
    putchar('\n');
    
    printf("idx数组为　{");
    for( i=0; i<number; i++)
        printf("%4d",idx[i]);
    printf("}");
    
        
    return 0;
}