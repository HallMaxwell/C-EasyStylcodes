void func(int **a, int **b)
{
    static int x = 100;
    static int y = 200;
    *a = &x;
    *b = &y;
}
#include <stdio.h> 
#include <stdlib.h>
int main() 
{ 
    // 两个指针，初始化为空 
    int *a = NULL; 
    int *b = NULL; 
    func(&a, &b);
    // 将指针的指针传入被调函数 
    if (a != NULL && b != NULL) 
    printf("a=%d b=%d\n", *a, *b); 
    system("pause");
    return 0; 
}