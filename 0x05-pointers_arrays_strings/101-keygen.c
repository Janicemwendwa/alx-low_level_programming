#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - generates random valid passwords for the program 101-crackme
 * Returns: 0
 */
int main(void)
{
	int mrand, count, total;

	srand(time(NULL));
	for (count = 0, total = 2772; total > 122; count++)
	{
		mrand = (rand() % 125) + 1;
		printf("%c", mrand);
		total -= mrand;
	}
	printf("%c", total);
	return (0);
}
