#include <stdio.h>
#include <stdlib.h>
int main()
{
    int x;//定义一元一次方程未知数
    while(1)
    {
        scanf("%d", &x);//输入求得方程的解的值（为整数）
        if(0.5*x+(-2)==1)//括号内输入方程表达式（以可修改的左值开头，避免分数<+1>）
        {
            break;
        }
        printf("Equastion Wrong, please check the equastion then try again.\n");
    }
    printf("Equastion Right.\n");
    system("pause");
    return 0;
}