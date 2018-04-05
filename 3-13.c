#include <stdio.h>/*用switch语句判断所输入月份所处的季节*/
int main(void)
{
    int mouth;
    printf("请输入月份：");scanf("%d",&mouth);
    switch(mouth)
    {
        case 3 :printf("该月为春季");break;
        case 4 :printf("该月为春季");break;
        case 5 :printf("该月为春季");break;
        case 6 :printf("该月为夏季");break;
        case 7 :printf("该月为夏季");break;
        case 8 :printf("该月为夏季");break;
        case 9 :printf("该月为秋季");break;
        case 10 :printf("该月为秋季");break;
        case 11 :printf("该月为秋季");break;
        case 12 :printf("该月为冬季");break;
        case 1 :printf("该月为冬季");break;
        case 2 :printf("该月为冬季");break;
        default :printf("该月不存在");break;
        

    }
    return 0;
}