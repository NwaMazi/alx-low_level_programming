#include "main.h"

/**
 * largest_number - this will return the largest of 3 numbers
 * @a: 1st integer
 * @b: 2nd integer
 * @c: 3rd integer
 * Return: largest number
 */

int largest_number(int a, int b, int c)
{
 int largest;

 if (a > b && a > c)
 {
 largest = a;
 }
 else if (a > b && c > a)
 {
 largest = c;
 }
 else if (b > c)
 {
 largest = b;
 }
 else
 {
 largest = c;
 }

return (largest);
}
