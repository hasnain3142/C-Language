#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <stdlib.h>         //Imported Standard Library
#include <ctype.h>

int main(int argc, string argv[])
{
    char *key = argv[1];
    if (argv[2] != '\0')           //If more than 1 argument is passes
    {
        printf("Usage: ./substitution key\n");    //Error message will be printed
        return 1;
    }

    if (strlen(key) != 26)
    {
        printf("Key must contain 26 characters\n");
        return 1;
    }
    for (int i = 0; i < 26; i++)
    {
        if (!isalpha(key[i]))
        {
            printf("Usage: ./substitution key\n");
            return 1;
        }
    }

    int keys[] = {65,66,67,68,69,70,71,72,73,74,74,76,77,78,79,80,81,82,83,84,85,86,87,88,89,90};
    int index[26];

    string text = get_string("plaintext: ");

    for (int i = 0; i < 26; i++)
        {
            int a = toupper(key[i]);
            index[i] = a - keys[i];
        }

    int length = strlen(text);
    char cipher[length];

    for(int i = 0; i < length; i++)
    {

        if isalpha(text[i])
        {
            int x = text[i];
            if ('a' <= x && x <= 'z' )
            {
                cipher[i] = x + index[x-97];
            }
            else
            {
            cipher[i] =  x + index[x-65];
            }
        }
        else
        {
            cipher[i] = text[i];
        }
    }

        printf("%s\n",cipher);

}



