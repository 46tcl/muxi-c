//使用sqrt函数来开根号计算　正方形的边长
//电脑的gcc编译器对sqrt未定义的引用，需要在指令后加　-lm ,例如这个程序的编译命令是：gcc 7-9.c -lm
#include <stdio.h>
#include <math.h>
double len(double area)
{
    return sqrt(area);
}
int main(void)
{
    double s;
    do
    {
        printf("请输入正方形的面积：");
        scanf("%lf",&s );
        if( s < 0)
            printf("请输入正数.\n");
        else
            printf("正方形的边长是（保留三位小数）：%6.3lf\n",len(s));
    }while( s < 0 );
    return 0;
}