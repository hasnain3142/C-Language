#include <stdio.h> 
#include <cs50.h>                  //Imported this library for get_long function
#include <string.h>                //Imported this library for strlen function

int main(void)
{
    //Initialized an array of characters
    char str[16];            
    //Propmpt user for Credit Card number       
    long number = get_long("Number: ");
    //Converted number to string
    sprintf(str, "%ld", number);
    //Computed length of cc number
    int length = strlen(str);
    
    if (length < 13 || length > 16)
    {
        printf("INVALID\n");
        return 0;
    }

    //Applying Luhn's Algorithm
    int checksum = 0;
    for (int i = (length - 2); i >= 0 ; i -= 2)
    {
        int x = str[i] - 48; 
        int product = x * 2;
        if (product > 9)
        {
            checksum += product / 10;
            checksum += product % 10;
        }
        else
        {
            checksum += product;
        }
    }
    for (int i = length - 1; i >= 0; i -= 2)
    {
        int x = str[i] - 48; 
        checksum += x;
    }

    // If the total sum has remainder 0 when divided by 10, It is valid
    if (checksum % 10 == 0)
    {
        if (length == 13)
        {
            printf("VISA\n");
        }
        else if (length == 15)
        {
            if (str[0] == '3' && (str[1] == '4' || str[1] == '7'))
            {
                printf("AMEX\n");
            }
            else
            {
                printf("INVALID\n");
            }
        }
        else if (length == 16)
        {
            if (str[0] == '4')
            {
                printf("VISA\n");
            }
            else if (str[0] == '5' && (str[1] < '6'))
            {
                printf("MASTERCARD\n");
            }
            else
            {
                printf("INVALID\n");
            }
        }
    }
    else
    {
        printf("INVALID\n");
    }
}
    