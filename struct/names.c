#include <stdio.h>
#include <cs50.h>
#include <string.h>

int main(void)
{
    string names[4] = {"Hasnain","Ali","Abbas","Haider"};
    for (int i = 0; i < 4; i++)
    {
        if (strcmp("Hasnain",names[i]) == 0)
        {
            printf("Found\n");
            return 0;
        }
        printf("Not Found\n");
        return 1;
    } 
}