#include <stdio.h>
#define number 3
int put_count(void)
{
    static int  a=0;
    a++;
    return a;
}
int main(void)
{
    for(int i=0;i<number;i++)
    {
        printf("put_count:第%d次\n",put_count());
    }
    
    return 0;
        
    
}