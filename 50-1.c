#include <stdio.h> /*判断三角形形状*/ 
int main()
{
float a,b,c,t;
printf("请输入三个实数：");
scanf("%f%f%f",&a,&b,&c);
	if(a<=0||b<=0||c<=0)
		puts("无法构成三角形。");
	else if(a==b&&a==c&&b==c)
		puts("1");
	else if(a==b||a==c||b==c)
		puts("2");
	else 
		puts("3") ;
	return 0;
} 