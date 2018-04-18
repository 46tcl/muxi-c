/*这段代码来自网上，不是自己写的．因为实在搞不懂关于逻辑位移还有算数位移，先放在这里，有空看*/
/* 
    编写set_n函数，返回将无符号整数x的第pos位开始的n位设为1后的值 
    编写reset_n函数，返回将无符号整数x的第pos开始的n位位设为0后的值  
    编写inverse_n函数，返回将无符号整数x的第pos开始的n位取反后的值 
*/  
  
#include <stdio.h>  
   
// 返回将无符号整数x的第pos位开始的n位设为1后的值  
unsigned set_n(unsigned x, int pos, int n)  
{  
    unsigned b = 1;   
    while (--n)    b *= 2;   
    b -= 1;  
      
    return x |= (b << pos - 1);         
}  
  
// 返回将无符号整数x的第pos位开始的n位设为0后的值  
unsigned reset_n(unsigned x, int pos, int n)  
{  
    unsigned b = 1;   
    while (--n)    b *= 2;    
    b -= 1;  
      
    return x &= (~(b << pos - 1));         
}  
  
// 回将无符号整数x的第pos位取反后的值  
unsigned inverse_n(unsigned x, int pos, int n)  
{  
    unsigned b = 1;  
    while (--n)    b *= 2;  
    b -= 1;  
      
    return x ^= b << pos - 1;           
}  
  
  
int main(void)  
{  
    unsigned x;  
    int pos;  
    int n;  
    printf("请输入一个非负整数：");  
    scanf("%u", &x);  
    printf("请输入从第几位开始：");  
    scanf("%d", &pos);  
    printf("请输入到第几位结束：");  
    scanf("%d", &n);  
      
    printf("\n%u的从第%d位开始的%d位设为1后的值：%u\n", x, pos, n, set_n(x, pos, n));  
    printf("\n%u的从第%d位开始的%d位设为0后的值：%u\n", x, pos, n, reset_n(x, pos, n));  
    printf("\n%u的从第%d位开始的%d位取反后的值 ：%u\n", x, pos, n, inverse_n(x, pos, n));    
      
    return(0);            
}  
