#include <stdio.h>
#include <stdlib.h>
int main() 
{ 
    int n = 123; // int 
    int *oneStar = &n; // int * 
    int **twoStar = &oneStar; // int ** 
    int ***threeStar = &twoStar; // int *** 
    int ****fourStar = &threeStar; // int **** 
    int *****fiveStar = &fourStar; // int ***** 
    printf("n = %d\n", *****fiveStar); // 五次取值，还原为int 
    system("pause");
    return 0; 
}