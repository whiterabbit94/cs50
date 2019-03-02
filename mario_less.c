/*Prints half of a pyramid like in Super Mario Bros. 
   #
  ##
 ###
####  based on user's input of height (n)
*/

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
          
    for (int i = 0; i<n; i++)	// iterating over lines in the pyramid
    {
        for (int j = 1; j<=n; j++)   // iterating over symbols in line
        {
            if (j<n-i) 
                printf(" ");
            else 
                printf ("#");
        }
        printf ("\n");
    }
}

