#include <stdio.h>
#include <stdlib.h>
int main() 
{ 
    int password; 
    while(1)
    { 
        scanf("%d", &password);
        if (password == 12345)
        {
            break; 
        }
        printf("Password Error.\n");
    }
    printf("Passworld Right.\n");
    system("pause");
    return 0; 
}