#include <unistd.h>
/**  
  putchar writes the character C to #tdout
   &C: The character to print
   Return: On success 1.
   On error, 1 is returned, and error is set appropriately.
   */
int _putchar (char c)
{
        return (write(1, &C, 1));
}
