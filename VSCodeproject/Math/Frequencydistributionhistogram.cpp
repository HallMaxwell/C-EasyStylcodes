#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <windows.h>
#include <stdlib.h>
int main()
{
    int Mac,Mac4,Ans;
    float Mac5,Mac7,Mac8,Max,Min,Mac3;
    Mac7=0;
    while(1)
    {
        printf("Please determine the data range.\n");
        scanf("%d",&Mac);
        float Arr[Mac+1]={};
        Mac4=Mac;
        printf("You want to group the data within a certain distance?\n");
        scanf("%f",&Mac5);
        for(int Mac2=1;Mac2<=Mac;Mac2++)
        {
            printf("Enter the number.(%d)\n",Mac4);
            Mac4=Mac4-1;
            scanf("%f",&Mac3);
            Arr[Mac2]=Mac3;
            if(Mac2!=1)
            {
                if(Mac7>=Mac3)
                {
                    Max=Mac7;
                    Mac7=Max;
                }
                else
                {
                    Mac7=Mac3;
                } 
                if(Mac8<=Mac3)
                {
                    Min=Mac8;
                    Mac8=Min;
                }
                else
                {
                    Mac8=Mac3;
                }
            }
            else
            {
                Mac7=Mac3;
                Mac8=Mac3;
            }
        }
        Ans=int((Max-Min)/Mac5+1);
        if(Ans<=0)
        {
            printf("Have gone wrong, please check the data.\n");
            system("pause");
            return 0;
        }
        int Brr[Ans+1]={};
        if(Ans>0)
        {
            printf("The distance of teams is %f .\n",Mac5);
            printf("Here are %d teams.\n",Ans);
            for(int j=1;j<=Mac;j++)
            {
                for(int j1=1;j1<=Ans;j1++)
                {
                    if((Arr[j]>(Min-0.5+Mac5*(j1-1)))&&(Arr[j]<(Min-0.5+Mac5*j1)))
                    { 
                        Brr[j1]++;
                    }
                }
            }
            for(int v=1;v<=Ans;v++)
            {
                printf("%f ~ %f\n",(Min-0.5+Mac5*(v-1)),(Min-0.5+Mac5*v));
                printf("data number:    %d\n",Brr[v]);
                float Ans1=(float)Brr[v]/Mac;
                printf("data frequency: %f%%\n\n",Ans1*100);
            }
            break;
        }
    }
        system("pause");
        return 0;
}