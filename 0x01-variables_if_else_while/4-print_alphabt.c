#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char low;

	for (low = 'a'; low <= 'z'; low++)
  {
    if(low != 'q' && low != 'e')
	      	putchar(low);
  }
  printf("\n");

	return (0);
}