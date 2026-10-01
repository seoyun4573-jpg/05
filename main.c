#include <stdio.h>

int main(void) 
{
    int num;

    printf("put the number: ");
    scanf("%d", &num);

    if (num > 0) 
        printf("num is a positive integer.\n"); 
    else if (num < 0)
        printf("num is a negative integer.\n");
    else
        printf("num is zero.\n");
    

    return 0;
}