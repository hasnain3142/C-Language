#include <cs50.h>          //Included a library so that we can use get_int function
#include <stdio.h>

int main(void)
{
    int height;         //Initialized a variable height
    do
    { 
        height = get_int("Height: ");
    }      
    //Prompt user for height
    while (1 > height || height > 8);   
    //A do while loop will force user to enter values b/w 1 & 8
    

    for (int i = 1; i < (height + 1); i++) 
    { 
        //A for loop for printing lines
        for (int k = i; k < height; k++)
        {     
            //A for loop for printing spaces
            printf(" ");
        }
        for (int j = 0; j < i; j++) 
        {
            //A for loop for printing hashes
            printf("#");
        }
        printf("\n");                   //For changing line
    }
}

