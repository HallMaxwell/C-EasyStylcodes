#include <stdio.h>
#include <stdlib.h>
int* func()
{
    static int n = 100;
    return &n;
}
int main()
{
    int* p = func();
    printf("%d\n", *p);
    system("pause");
    return 0;
}