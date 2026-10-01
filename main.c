#include <stdio.h>

int main(void) 
{
    int num;

    printf("put the number: ");
    scanf("%d", &num);

    if (num > 0) 
        printf("absolute value is: %d\n", num); 
    else
        printf("absolute value is: %d\n", -num);

    return 0;
}