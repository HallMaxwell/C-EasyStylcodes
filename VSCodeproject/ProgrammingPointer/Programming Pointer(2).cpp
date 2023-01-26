#include <stdio.h>
#include <stdlib.h>
int main()
{
    char *pc;
    short *ps;
    int *pn;
    long *pl;
    long long *pll;
    float *pf;
    double *pd;
    pc = (char *)100;
    ps = (short *)100;
    pn = (int *)100;
    pl = (long *)100;
    pll = (long long *)100;
    pf = (float *)100;
    pd = (double *)100;
    pc = pc + 1;
    ps = ps + 1;
    pn = pn + 1;
    pl = pl + 1;
    pll = pll + 1;
    pf = pf + 1;
    pd = pd + 1;
    printf("pc=%u\n", pc);
    printf("ps=%u\n", ps);
    printf("pn=%u\n", pn);
    printf("pl=%u\n", pl);
    printf("pll=%u\n", pll);
    printf("pf=%u\n", pf);
    printf("pd=%u\n", pd);
    system("pause");
    return 0;
}