#include <stdio.h>
typedef struct
{
    char *name;
    int age;
    float percentage;
}
person;

int main(void)
{   person student[3];
    student[0].name = "Hasnain Ali";
    student[0].age = 18;
    student[0].percentage = 90.0;  
}