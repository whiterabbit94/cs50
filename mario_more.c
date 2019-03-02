/* The program is almost identical to mario_less except there is now reversed half-pyramid put side by side with the first one */

#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int n;
    do 
    {
        n = get_int("Height: ");
    } 
    while (n<1 || n>8);
          
    for (int i = 0; i<n; i++)
    {
        for (int j = 1; j<=n; j++)
        {
            if (j<n-i) 
                printf(" ");
            else 
                printf ("#");
        }
        printf("  ");
        for (int k = 0; k<i+1; k++)	// To make the same reversed pyramid number of hashes that is equal to the number of the line are printed (without spaces)
        {
            printf("#");
        }
        printf ("\n");
    }
}
