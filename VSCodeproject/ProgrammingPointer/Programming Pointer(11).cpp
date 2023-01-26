int *func()
{
    static int n = 100; // 关键词static让变量n不被回收 
    n++; // 变量n自增 
    return &n; 
}
#include <stdio.h> 
#include <stdlib.h>
int main() 
{ 
    int* p = func(); 
    printf("%d\n", *p); 
    func(); 
    printf("%d\n", *p); 
    func(); 
    printf("%d\n", *p); 
    func(); 
    printf("%d\n", *p); 
    func(); 
    printf("%d\n", *p); 
    system("pause");
    return 0; 
}