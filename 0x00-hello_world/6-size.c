#include <stdio.h>
/**
 * main - Prints the size of various computer types
 * Return:0 (Success)
 */

int main(void)
{
char a;
int b;
long int c;
long long d;
float f;
printf("Size of a char: %zu byte(s)\n", (char) sizeof(a));
printf("Size of an int: %zu byte(s)\n", (int)sizeof(b));
printf("Size of a long int: %zu byte(s)\n", (long int)sizeof(c));
printf("Size of a long long: %zu byte(s)\n", (long long)sizeof(d));
printf("Size of a float: %zu byte(s)\n", (float)sizeof(f));
return (0);
}
