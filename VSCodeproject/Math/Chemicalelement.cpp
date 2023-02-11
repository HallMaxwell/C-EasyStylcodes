#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdio.h>
#include <windows.h>
int main()
{
    char A;
    float b,c;
    printf("A chemical element is a group of atoms that have the same nuclear charge (the number of protons in the nucleus). Philosophically, an element is the result of a qualitative change in the number of protons in an atom.Common elements are hydrogen, nitrogen and carbon. As of 2019, a total of 118 elements have been discovered, of which 94 are found on Earth. Elements with atomic numbers greater than 83 (bismuth and beyond) have unstable nuclei that decay. The 43rd and 61st elements (technetium and promethium) have no stable isotopes and decay. The heaviest element that exists in nature is neptunium 93.\n");
    printf("[");
    for(int b=0;b<=25;b++)
    {
        Sleep(300);
        printf(".");
    }
    printf("]\n");
    printf("Enter the chemical element you want to find out\n");
    scanf("%s",&A);
    if(A=='Sb')
    {
        printf("antimony\n");
        printf("density   6.697 g/cm³\n");
        float Ans=6.697;
        printf("Please enter the mass/volume of the element and we will calculate the corresponding volume/mass\n");
        scanf("%f",&b);
        
        printf("volume/mass   ");
        printf("%f",c);
    }
}
