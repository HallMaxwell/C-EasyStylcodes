#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <windows.h>
#include <stdlib.h>
int main()
{
    int x, z;
    float y;
    printf("Please enter your height:(the unit:cm)\n");
    scanf("%d", &x);
    printf("Please enter your Weight:(the unit:kg)\n");
    scanf("%f", &y);
    printf("Please enter your age:\n");
    scanf("%d", &z);
    while(1)
    {
        if(((z<=13)||(z>=99))||((x<=140)||(x>=190))||((y<=40)||(y>=150)))
    {
        printf("Please enter the correct height:(the unit:cm)\n");
        scanf("%d", &x);
        printf("Please enter the correct Weight:(the unit:kg)\n");
        scanf("%f", &y);
        printf("Please enter the correct age:\n");
        scanf("%d", &z);
    }
        else
        {
            break;
        }
    }
    
    for(int m=0;m<=30;m++)
    {
        printf("\n");
    }
    printf("         be working out:\n");
    printf("[");
    for(int n=0;n<=24;n++)
    {
        Sleep(1000);
        printf(".");
    }
    printf("]\n");
    float Mac = x/100;
    float BMI = y/(Mac*Mac);
    printf("your number of BMI is ");
    printf("%f", BMI);
    printf("kg/cm^2.\n");
    if(BMI>24)
    {
        printf("this means, you should lose weight.\n");
    }
    else if(BMI<18.5)
    {
        printf("this means, you should put out weight and take more exercise.\n");
    }
    else
    {
        printf("your number of BMI is normal.\n");
    }
    printf("Thanks for using.\n");
    system("pause");
    return 0;
}