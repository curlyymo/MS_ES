#include <stdio.h>
#include <stdlib.h>

int main()
{
 unsigned char x;
    printf("Please enter your grade: ");
    scanf("%hhu", &x);

    if ((x >= 90) && (x <= 100))
    {
        printf("Your grade is A\n");
    }
    else if ((x >= 80) && (x < 90))
    {
        printf("Your grade is B\n");
    }
    else if ((x >= 70) && (x < 80))
    {
        printf("Your grade is C\n");
    }
    else if ((x >= 60) && (x < 70))
    {
        printf("Your grade is D\n");
    }
    else if ((x >= 0) && (x < 60))
    {
        printf("Your grade is F\n");
    }
    else
    {
        printf("Please enter a valid number\n");
    }



    return 0;
}
