#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x,y; char sel;
    printf("Please enter the first number: ");
    scanf("%d",&x);
    printf("Please enter the second number:");
    scanf("%d",&y);
    printf(" press + for Addition\n");
    printf(" press - for subtraction\n");
    printf(" press * for Mulitiplication\n");
    printf(" press / for division\n");
    printf(" press # for remainder\n");
    printf("Choose a symbol :");
    scanf(" %c",&sel);

    switch (sel)
    {
        case '+':
        printf("The result= %d", x+y);
        break;

        case '-':



            printf("The resultn= %d", x-y);
            break;


        case '*' :

                printf ("The result= %d",x*y);
                break;
        case '/':
            if (y!=0)
                {printf ("The result= %.2f\n",(float)x/y);
                break;

                }
                else{
                    printf("The answer is undefined\n");
                    break;
                }
        case '#':
              if (y!=0)
                {printf ("The result= %d",x%y);
                break;

                }
                else{
                    printf("The answer is undefined\n");
                  }  break;

    }


    return 0;
}
