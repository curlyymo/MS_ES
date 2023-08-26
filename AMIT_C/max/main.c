#include <stdio.h>
#include <stdlib.h>

int main()
{

    int num1, num2, num3, num4;
    int maxNumber;

    printf("Enter number 1: ");
    scanf("%d", &num1);

    printf("Enter number 2: ");
    scanf("%d", &num2);

    printf("Enter number 3: ");
    scanf("%d", &num3);

    printf("Enter number 4: ");
    scanf("%d", &num4);

    maxNumber = num1;
    if (num2 > maxNumber) {
        maxNumber = num2;
    }
    if (num3 > maxNumber) {
        maxNumber = num3;
    }
    if (num4 > maxNumber) {
        maxNumber = num4;
    }


    printf("The maximum number is: %d\n", maxNumber);

    return 0;
}








