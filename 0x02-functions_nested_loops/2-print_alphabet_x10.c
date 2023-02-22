#include "main.h"

/**
 *print_alphabet_x10 - print alphabet 10 times, in lowercase.
*/

void print_alphabet_x10(void)
{
	int counter = 0;
	char alpha;

	while (counter++ <= 9)
	{
		for (alpha = 97; alpha <= 122; alpha++)
			_putchar(alpha);
		_putchar('\n');
	}
}
