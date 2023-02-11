#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
int main()
{
    char Mac2,Choice,Fra;
    float Mac;
    int m,n;
    float Ar,Ar1,Ar2,Ar3,Ar4,Ar5,Ar6,Ar7,Ar8,Ar9,Ar10,Ar11;
    float Arr[7]={Ar,Ar1,Ar2,Ar3,Ar4,Ar5};
    float Brr[7]={Ar6,Ar7,Ar8,Ar9,Ar10,Ar11};
     
    float None[7]={};
    float Br,Br1,Br2,Br3,Br4,Br5,Br6,Br7;
    float Max,Max1,Max2,Max3,Ans,Ans1,Sel,Sel1;
    while(1)
    {
        printf("We name the first Unknown Number 'Mac'.\n");
        printf("[");
        for(int e=0;e<=10;e++)
        {
            Sleep(300);
            printf(".");
        }
        printf("]\n");
        printf("We name the second Unknown Number 'Mac2'.\n");
        printf("[");
        for(int e=0;e<=10;e++)
        {
            Sleep(300);
            printf(".");
        }
        printf("]\n");
        printf("Is there the 'Mac2'?<T/F>\n");
        scanf("%s",&Mac2);
        if(Mac2=='F')
        {
            while(1)
            {
                for(int a=1;a<=3;a++)
                {
                     printf("Enter the known Number(on equals sign's left)<0>\n");
                     scanf("%f",&Arr[a]);
                }
                for(int d=4;d<=6;d++)
                {
                     printf("Enter the known Number(on equals sign's right)<0>\n");
                     scanf("%f",&Arr[d]);
                }
                if(Arr==None)
                {
                    printf("Check the equation\n");
                    printf("         be working out:\n");
                    printf("[");
                    for(int b=0;b<=24;b++)
                    {
                        Sleep(300);
                        printf(".");
                    }
                        printf("]\n");
                }
                else break;
            }
            while(1)
            {
                printf("Enter the coefficient of the unknown Number(on equals sign's left)<0>\n");
                scanf("%f",&Br);
                printf("Enter the coefficient of the unknown Number(on equals sign's right)<0>\n");
                scanf("%f",&Br1);
                if((Br==0)&&(Br1==0))
                {
                    printf("Check the equation\n");
                    printf("         be working out:\n");
                    printf("[");
                    for(int c=0;c<=24;c++)
                    {
                        Sleep(300);
                        printf(".");
                    }
                    printf("]\n");
                }
                else break;
            }
            Arr[1]=Arr[1]*(-1);
            Arr[2]=Arr[2]*(-1);
            Arr[3]=Arr[3]*(-1);
            Max=Arr[1]+Arr[2]+Arr[3]+Arr[4]+Arr[5]+Arr[6];
            Br1=Br1*(-1);
            Max1=Br1+Br;
            if(Max1==0)
            {
                printf("The equation is meaningless.\n");
            }
            else
            {
                 Ans=Max/Max1; 
                 printf("Mac ");
                 printf("= ");
                 printf("%f\n",Ans);
            }
            printf("Do you want to make another equation?<T/F>\n");
            scanf("%s",&Choice);
            if(Choice=='F')
            {
                 system("pause");
                 return 0;
            }
        }
        if(Mac2=='T')
        {
            
            while(1)
            {
                printf("The equation 1.\n");
                for(int a=1;a<=3;a++)
                {
                     printf("Enter the known Number(on equals sign's left)<0>\n");
                     scanf("%f",&Arr[a]);
                }
                for(int d=4;d<=6;d++)
                {
                     printf("Enter the known Number(on equals sign's right)<0>\n");
                     scanf("%f",&Arr[d]);
                }
                if(Arr==None)
                {
                    printf("Check the equation\n");
                    printf("         be working out:\n");
                    printf("[");
                    for(int b=0;b<=24;b++)
                    {
                        Sleep(300);
                        printf(".");
                    }
                        printf("]\n");
                }
                else break;
            }
            while(1)
            {
                printf("Enter the coefficient of the Mac(on equals sign's left)<0>\n");
                scanf("%f",&Br);
                printf("Enter the coefficient of the Mac(on equals sign's right)<0>\n");
                scanf("%f",&Br1);
                printf("Enter the coefficient of the Mac2(on equals sign's left)<0>\n");
                scanf("%f",&Br2);
                printf("Enter the coefficient of the Mac2(on equals sign's right)<0>\n");
                scanf("%f",&Br3);
                if(((Br2==0)&&(Br3==0))||((Br==0)&&(Br1==0)))
                {
                    printf("Check the equation\n");
                    printf("         be working out:\n");
                    printf("[");
                    for(int c=0;c<=24;c++)
                    {
                        Sleep(300);
                        printf(".");
                    }
                    printf("]\n");
                }
                else break;
            }
            Arr[1]=Arr[1]*(-1);
            Arr[2]=Arr[2]*(-1);
            Arr[3]=Arr[3]*(-1);
            Br=Br*(-1);
            Max1=Br+Br1;
            Br3=Br3*(-1);
            Max=Br3+Br2;
            Ans=(Arr[1]+Arr[2]+Arr[3]+Arr[4]+Arr[5]+Arr[6]+(Max1*Mac))/Max; 
            while(1)
            {
                printf("The equation 2.\n");
                for(int a=1;a<=3;a++)
                {
                     printf("Enter the known Number(on equals sign's left)<0>\n");
                     scanf("%f",&Brr[a]);
                }
                for(int d=4;d<=6;d++)
                {
                     printf("Enter the known Number(on equals sign's right)<0>\n");
                     scanf("%f",&Brr[d]);
                }
                if(Brr==None)
                {
                    printf("Check the equation\n");
                    printf("         be working out:\n");
                    printf("[");
                    for(int b=0;b<=24;b++)
                    {
                        Sleep(300);
                        printf(".");
                    }
                        printf("]\n");
                }
                else break;
            }
            while(1)
            {
                printf("Enter the coefficient of the Mac(on equals sign's left)<0>\n");
                scanf("%f",&Br4);
                printf("Enter the coefficient of the Mac(on equals sign's right)<0>\n");
                scanf("%f",&Br5);
                printf("Enter the coefficient of the Mac2(on equals sign's left)<0>\n");
                scanf("%f",&Br6);
                printf("Enter the coefficient of the Mac2(on equals sign's right)<0>\n");
                scanf("%f",&Br7);
                if(((Br4==0)&&(Br5==0))||((Br6==0)&&(Br7==0)))
                {
                    printf("Check the equation\n");
                    printf("         be working out:\n");
                    printf("[");
                    for(int c=0;c<=24;c++)
                    {
                        Sleep(300);
                        printf(".");
                    }
                    printf("]\n");
                }
                else break;
            }
            Brr[1]=Brr[1]*(-1);
            Brr[2]=Brr[2]*(-1);
            Brr[3]=Brr[3]*(-1);
            Br4=Br4*(-1);
            Max2=Br4+Br5;
            Br7=Br7*(-1);
            Max3=Br6+Br7;
            Ans=(Max*Brr[1]+Max*Brr[2]+Max*Brr[3]+Max*Brr[4]+Max*Brr[5]+Max*Brr[6]-Max3*Arr[1]-Max3*Arr[2]-Max3*Arr[3]-Max3*Arr[4]-Max3*Arr[5]-Max3*Arr[6])/(Max3*Max1-Max*Max2);
            Ans1=(Ans*Max-Arr[1]-Arr[2]-Arr[3]-Arr[4]-Arr[5]-Arr[6])/Max1; 
            if(((Max3*Max1-Max*Max2)==0)||(Max1==0))
            {
                printf("Please check the equation correctly.\n");
                printf("         be working out:\n");
                printf("[");
                for(int b=0;b<=24;b++)
                {
                    Sleep(300);
                    printf(".");
                }
                printf("]\n");
            }
            else
            {
                printf("The equation only have aresult:\nMac ");
                printf("= ");
                printf("%f\n",Ans);
                printf("Mac2 ");
                printf("= ");
                printf("%f\n",Ans1);
                printf("Turn into fraction.<T/F>\n");
                scanf("%s",&Fra);
                if(Fra=='T')
                {
                     m/n==Ans;
                     m=0;
                     n=1;
                     for(int u=1;u<=100;u++)
                     {
                         m++;
                         for(int z=1;z<=100;z++)
                         {

                         }
                    }
                }
            }
            printf("Do you want to make another equation?<T/F>\n");
            scanf("%s",&Choice);
            if(Choice=='F')
            {
                 system("pause");
                 return 0;
            }
        }
    }
} 


    
        