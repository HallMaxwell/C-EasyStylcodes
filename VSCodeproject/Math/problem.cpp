#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
int main()
{
    float a;
    int b;
    b=0;
    int c;
    c=0;
    int d;
    d=0;
    int e;
    e=0;
    int f;
    f=0;
    int g;
    g=0;
    int h;
    h=0;
    for(int n=1;n<=50;n++)
    {
        printf("Enter the height.\n");
        scanf("%f",&a);
        if(a<145.5)
        {
            b++;
        }
        if((a>=145.5)&&(a<150.5))
        {
            c++;
        }
        if((a>=150.5)&&(a<155.5))
        {
            d++;
        }
        if((a>=155.5)&&(a<160.5))
        {
            e++;
        }
        if((a>=160.5)&&(a<165.5))
        {
            f++;
        }
        if((a>=165.5)&&(a<=170.5))
        {
            g++;
        }
        if(a>170.5)
        {
            h++;
        }

    }
    printf("under 145.5cm: ");
    printf("%d",b);
    printf(" persons.\n");
    printf("between 145.5~150.5cm: ");
    printf("%d",c);
    printf(" persons.\n");
    printf("between 150.5~155.5cm: ");
    printf("%d",d);
    printf(" persons.\n");
    printf("between 155.5~160.5cm: ");
    printf("%d",e);
    printf(" persons.\n");
    printf("between 160.5~165.5cm: ");
    printf("%d",f);
    printf(" persons.\n");
    printf("between 165.5~170.5cm: ");
    printf("%d",g);
    printf(" persons.\n");
    printf("over 170.5cm: ");
    printf("%d",h);
    printf(" persons.\n");
    system("pause");
    return 0;
}
