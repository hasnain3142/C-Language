#include <stdio.h>
#include <cs50.h>
#include <string.h>

typedef struct
{
    string name;
    string number;
}
person;

int main(void)
{
    person people[4];

    people[0].name = "EMMA";
    people[0].number = "010-020";

    people[1].name = "DAVID";
    people[1].number = "020-010";

    // string names[2] = {"Hasnain","Ali"};
    // string numbers[2] = {"0301-24690xx","0310-008xxxx"};
    
    for (int i = 0; i < 2; i++)
    {
        if (strcmp(people[i].name,"DAVID") == 0)
        {
            printf("%s\n",people[i].number);
            return 0;
        }
    }
    printf("Not Found\n");
    return 1;
}