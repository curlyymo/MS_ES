#include <stdio.h>
#include <stdlib.h>
#define N 3
typedef struct
{
    char name[20];
    float age;
    int id;
    char sec[10];

} student_t;
int main()

{
    int i=0;
    int j=0;
    student_t  student_database[N]= {{"Mo",22,1003,"A1"},
                                      {"Co",21,1002,"B1"},
                                       {"Do",20,1001,"C1"},
    } ;
    int s=sizeof(student_t)/sizeof(student_database[0]);


    for(i=0; i<N-1; i++)
    {
        for(j=i+1; j<s; j++)
        {
            if(student_database[i].id>student_database[j].id)
            {
                student_t temp= student_database[i];
                student_database[i]=student_database[j];
                student_database[j]= temp;
            }
        }
    }


    for(int c=0; c<N; c++)
    {
        printf("Name: %s\n", student_database[c].name);
        printf("Age: %f\n", student_database[c].age);
        printf("ID: %d\n", student_database[c].id);
        printf("Section: %s\n\n", student_database[c].sec);
    }




    return 0;
}








