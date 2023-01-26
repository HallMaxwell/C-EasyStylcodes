#include <stdio.h> 
#include <stdlib.h>
int main() 
{ 
    int n = 123; 
    int *pn = &n; 
    int **pnn = &pn; 
    printf("**pnn = %d\n", **pnn); 
    system("pause");
    return 0; 
}