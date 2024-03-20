#include <stdio.h>
/**
*main:a program that prints the numbers from 1 to 100, followed by a new line
*But for multiples of three print Fizz instead of the number and for the multiples of five print Buzz
*and  For numbers which are multiples of both three and five print FizzBuzz.
*
*
*Return: returns 0
*/
int main()
{
    for (int i = 0; i <= 100; i++) //printing the numbers from zero to 100
    {
        if (i % 3 == 0 && i % 5 == 0 && i != 0)//if condition tru print "fizz buzz" and skip printing value of i and go to next number
        {
            printf("FizzBuzz ");
            continue;
        }
        else if (i % 3 == 0 && i != 0)
        {
            printf("Fizz ");
            continue;
        }
        else if (i % 5 == 0 && i != 0)
        {
            printf("Buzz ");
            continue;
        }
        printf("%d ", i);
    }
    putchar('\n');

    return (0);
}
