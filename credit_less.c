/* Counts number of coins (quarters, dimes, nickels and pennies) needed to return to customer. Input is in dollars. */ 

#include <stdio.h>
#include <cs50.h>

int main(void)
{
    int change;
    int counter = 0;
    do
    {
        change = get_float("How much is owned? ") * 100;    
    }
    while (change < 1);
    
    for (int i =0; change >= 25; )
    {
        change -=25;
        counter++;
    }
    for (int i = 0; change >= 10; )
    {
        change -= 10;
        counter++;
    }
    for (int i = 0; change >= 5; )
    {
        change -=5;
        counter++;
    }
    for (int i = 0; change >= 1; )
    {
        change -=1;
        counter++;
    }
    printf("%i\n", counter);
}
