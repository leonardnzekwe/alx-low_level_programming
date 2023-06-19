#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
	int random;
	int count;
	int total;

	srand(time(NULL));
	for (count = 0, total = 2772; total > 122; count++)
	{
		random = (rand() % 125) + 1;
		printf("%c", random);
		total -= random;
	}
	printf("%c", total);
	return (0);
}
