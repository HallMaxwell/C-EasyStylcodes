#include <iostream>
#include <stdlib.h>
using namespace std;
int main()
{
    int a, b, c;
    for (a = 1; a < 100; a++)
        for (b = 1; b < 100; b++)
            for (c = 1; c < 100; c++)
                if (a < b && a * a + b * b == c * c)
                    cout << a << " " << b << " " << c << endl;
                    system("pause");
    return 0;
}