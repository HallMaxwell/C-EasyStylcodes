#include <stdio.h>
#include <stdlib.h>
int main() 
{ 
    int n = 123; 
    int *pn = &n; 
    printf("pn = %u\n", pn); 
    printf("&pn = %u\n", &pn); 
    system("pause");
    return 0; 
}