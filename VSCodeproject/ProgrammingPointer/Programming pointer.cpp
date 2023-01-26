#include <stdio.h>
#include <stdlib.h> 
int main()
{
    int n = 123;
    int *pn = &n;
    printf("%u\n", pn);
    printf("%u\n", *pn);
    system("pause");
    return 0;
}