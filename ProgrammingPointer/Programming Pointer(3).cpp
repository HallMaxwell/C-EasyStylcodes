#include <stdio.h>
#include <stdlib.h>
    int main()
{
    int n1;
    int n2;
    int n3;
    int n4;
    int *pn1 = &n1;
    int *pn2 = &n2;
    int *pn3 = &n3;
    int *pn4 = &n4;
    printf("pn1 = %u\n", pn1);
    printf("pn2 = %u\n", pn2);
    printf("pn3 = %u\n", pn3);
    printf("pn4 = %u\n", pn4);
    putchar('\n');
    int *p = &n1;
    printf("p = %d\n", p);
    printf("p - 1 = %d\n", p - 1);
    printf("p - 2 = %d\n", p - 2);
    printf("p - 3 = %d\n", p - 3);
    putchar('\n');
    *p = 111;
    *(p - 1) = 222;
    *(p - 2) = 333;
    *(p - 3) = 444;
    printf("n1=%d\n", n1);
    printf("n2=%d\n", n2);
    printf("n3=%d\n", n3);
    printf("n4=%d\n", n4);
    system("pause");
    return 0;
}