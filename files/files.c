#include <stdio.h>
#include <cs50.h>

int main(void)
{
    // FILE *file = fopen("phonebook.csv","a");

    // char *name;
    // char *number;
    // printf("Name: ");
    // scanf("%s",name);
    // printf("Number: ");
    // scanf("%s",number);

    // fprintf(file, "%s, %s\n",name,number);
    // fclose(file);

    FILE *file = fopen("phonebook.csv","a");
    char *name = get_string("Name: ");
    char *number = get_string("Number: ");
    fprintf(file,"%s, %s\n",name,number);
    fclose(file);
}