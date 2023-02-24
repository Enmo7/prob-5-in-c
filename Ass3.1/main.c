#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x, y;

    printf("Enter Value of x\n ");
    scanf("%d", &x);

    printf("\nEnter Value of y\n ");
    scanf("%d", &y);

    printf("\nBefore Swapping: x = %d, y = %d", x, y);

    int temp = x;
    x = y;
    y = temp;

    printf("\nAfter Swapping: x = %d, y = %d", x, y);
    return 0;

}
