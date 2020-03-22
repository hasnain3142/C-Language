#include <stdio.h>
#include <cs50.h>
#include <math.h>
int main(void) 
{
    float change;
    do
    {
    change = get_float("Change owned: ");
    }
    while (change <= 0);
    int cents = round(change*100);
    int coins = 0;
    while (cents > 0) 
    {
        if ((cents - 25) >= 0) 
        {
            cents -= 25;
            coins++;
        }
        else if ((cents - 10) >= 0)
         {
            cents -= 10;
            coins++;
        }
        else if ((cents - 5) >= 0)
        {
            cents -= 5;
            coins++;
        }
        else if ((cents - 1) >= 0) 
        {
            cents -= 1;
            coins++;
        }
        }
printf("%d\n",coins);
}

