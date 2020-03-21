#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

int main(int argc,string argv[])
{
    char *key = argv[1];
    if (argv[2] != '\0')
    {
        printf("Usage: ./caesar key\n");
        return 1;
    }
    for (int i=0; i<strlen(key); i++)
    {
        if (!isdigit(key[i]))
        {
            printf("Usage: ./caesar key\n");
            return 1;
        }
    }

    printf("Success");
    string text = get_string("plaintext: ");
    int k = atoi(key);
    printf("%d\n",k);
    
