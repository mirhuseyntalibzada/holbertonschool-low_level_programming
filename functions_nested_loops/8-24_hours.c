#include <stdio.h>
#include "main.h"

/**
 * jack_bauer - prints every minute of the day of Jack Bauer
 *
 * Description: The function prints all the minutes in a 24-hour day,
 * from 00:00 to 23:59, each on a new line in the format HH:MM.
 */

void jack_bauer(void)
{
	int minutes, hours;

	minutes = 0;
	hours = 0;

	while (hours < 24)
	{
		minutes = 0;
		while (minutes < 60)
		{
			printf("%02d:%02d\n", hours, minutes);
			minutes++;
		}
		hours++;
	}
}
