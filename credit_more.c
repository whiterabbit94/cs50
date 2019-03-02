/* Checks if credit card number is valid according to Luhn's algorithm:
	1. Multiply every other digit by 2, starting with the number’s second-to-last digit, and then add those products’ digits together.
	2. Add the sum to the sum of the digits that weren’t multiplied by 2.
	3. If the total’s last digit is 0 (or, put more formally, if the total modulo 10 is congruent to 0), the number is valid. */

#include <stdio.h>
#include <cs50.h>

int main(void)
{
    long number;
    do
    {
        number = get_long("Credit card number, please: ");
    } while (number < 0);
    
    long original = number;
    long for_counter = number;
    int temp = 0;
    int temp1 = 0;
    int temp2 = 0;
    long product2 = 0;
    int counter = 0;
    
    long first = number % 10;
    
    for (int i = 0; for_counter > 0; for_counter /= 10)
    {
        temp = for_counter % 10;
        counter++;
    }
    
    number /= 10;
    while (number > 0)
    {
        product2 = (number % 10) * 2;
        if (product2 >= 10)
        {
            product2 = product2 / 10 + product2 % 10;
        }
        temp1 += product2;
        number /= 10;
        temp2 += number % 10;
        number /= 10;
    }
    long result = temp1 + temp2 + first;
    
    
    
    if (result % 10 == 0 && counter == 13 && original / 1000000000000 == 4)
    {
       printf("VISA\n");
    }
    else if (result % 10 == 0 && counter == 16 && original / 1000000000000000 == 4)
    {
       printf("VISA\n");
    }  
    else if (result % 10 == 0 && counter == 15)
    {
       printf("AMEX\n");
    } 
    else if (result % 10 == 0 && counter == 16 && (original / 100000000000000 == 51 || original / 100000000000000 == 52 || original / 100000000000000 == 53 || original / 100000000000000 == 54 || original / 100000000000000 == 55))
    {
       printf("MASTERCARD\n");
    } 
    else
    {
        printf("INVALID\n");
    }
}
