#include <stdio.h>
#include <stdlib.h>
int main()
{
    int arr[5] = {111, 222, 333, 444, 555};
    printf("arr[2] = %d\n", arr[2]);
    printf("2[arr] = %d\n", 2[arr]);
    printf("*(arr + 2) = %d\n", 2[arr]);
    system("pause");
    return 0;
}