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
        printf("Usage: ./caesar key\n");    //Error message will be printed
        return 1;
    }
    for (int i = 0; i < strlen(key); i++)       //Checking if argument has only digits
    {
        if (!isdigit(key[i]))
        {
            printf("Usage: ./caesar key\n");        //if it contains non-decimal characters, error message eill be printed
            return 1;
        }
    }

    printf("Success\n");
    string text = get_string("plaintext: ");        //Prompt user for text to be encrypted
    int k = atoi(key);                              //Converting key into int
    int length = strlen(text);                      //Calculating length
    char cipher[length];
    for (int i = 0; i < length; i++)
    {
        char ch = text[i];
        int ind = text[i];
        if (('a' <= ch && ch <= 'z') || ('A' <= ch && ch <= 'Z'))    //For Alphabets only
        {
            int ind2 = (int) ind + (int) k;
            if ('A' <= ch && ch <= 'Z')
            {
                if (ind2 > 90)
                {
                    do
                    {
                        ind2 = (ind2 - 90) + 64;
                    }
                    while (ind2 > 90);
                }
            }

            if ('a' <= ch && ch <= 'z')
            {

                if (ind2 > 122)
                {
                    do
                    {
                        ind2 = (ind2 - 122) + 96;
                    }
                    while (ind2 > 122);
                }


            }

            char ch2 = ind2;
            cipher[i] = ch2;
        }
        else
        {
            cipher[i] = ch;
        }
    }
    printf("ciphertext: %s\n", cipher);
    return 0;
}