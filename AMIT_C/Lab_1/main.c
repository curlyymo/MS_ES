#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
int num_1;
int num_2;
printf("The first number is ");
scanf("%d", &num_1);

printf("The second number  is");
scanf("%d", &num_2);

int add=num_1+num_2;
    printf("The addition  of the number is: %d\n",add);

int diff=num_1-num_2;
    printf("The subtraction of the number is: %d\n",diff);

int mul= num_1*num_2;
    printf("The multiplication of the number is: %d \n",mul);
if (num_2 != 0) {

float div=(float)(num_1/num_2);
    printf("The division of the number is: %.2f\n",div);

int remainder =(num_1% num_2);
    printf("The remainder is: %d\n", remainder);
}

else
{
  printf("The division is undefined\n");
  printf("The remanider is undefined");

}




return 0;
}
