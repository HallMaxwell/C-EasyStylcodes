#include <stdio.h>
#include <stdlib.h>
double Sqrt(double a, double p) // a是被开平方根数，p是所求精度

{
    double x = 1.0;
    double cheak;
    do
    {
        x = (a / x + x) / 2.0;
        cheak = x * x - a;
    } while ((cheak >= 0 ? cheak : -cheak) > p);
    return x;
}

int main()
{
    printf("%.4f\n", Sqrt(2.0, 0.0001));
    printf("%.4f\n", Sqrt(0.09, 0.0001));
    system("pause");
    return 0;
}