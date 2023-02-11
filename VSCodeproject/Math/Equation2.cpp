#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
int main()
{
     float x;
     for(float i=0;i>=(-1000);i-1)
    {
        x=i-1;
        if(8-(6*x)==20)
        {
            printf("x=",("%f",x));
            system("pause");
            return 0;
        }
    }
    for(float i=0;i<=1000;i+1)
    {
        x=i+1;
        if(8-(6*x)==20)
        {
            printf("x=",("%f",x));
            system("pause");
            return 0;
        }
    }
    printf("The Equation is meaningless.");
    system("pause");
    return 0;
}