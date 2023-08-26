#include <stdio.h>
#include <stdlib.h>

int main()
{
     char sel, repeat;
    double num1, num2, result;

    do {
        do {
            printf("Enter an operator (+ or -) for action: ");
            scanf(" %c", &sel);

            if (sel != '+' && sel != '-') {
                printf("Invalid operator! Please try again.\n");
            }
        } while (sel != '+' && sel != '-');

        printf("Enter two numbers: ");
        scanf("%lf %lf", &num1, &num2);

        if (sel == '+') {
            result = num1 + num2;
        } else if (sel == '-') {
            result = num1 - num2;
        }

        printf("Result: %lf\n", result);

        do {
            printf("Do you want to repeat? (y/n): ");
            scanf(" %c", &repeat);
        } while (repeat != 'y' && repeat != 'Y' && repeat != 'n' && repeat != 'N');
    } while (repeat == 'y' || repeat == 'Y');

    return 0;
}


