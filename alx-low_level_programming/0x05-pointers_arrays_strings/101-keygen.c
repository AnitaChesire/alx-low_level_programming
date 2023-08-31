#include <stdio.h>
#include <time.h>
#include <stdlib.h>

/**
 * main - check the code
 *
 * Return: numbers generated
 */

int main(void)
{
	char pass[84];
	int index =0, sum = 0, dh1, dh2;

	srand(time(0));

	while (sum < 2772)
	{
		pass[index] = 33 + rand() % 94;
		sum += pass[index++];
	}

	pass[index] = '\0';
	
	if (sum != 2772)
	{
		dh1 = (sum - 2772) /2;
		dh2 = (sum - 2772) /2;

		if ((sum - 2772) % 2 != 0)
		{
			dh1++;
		}
		
		for (index = 0; pass[index]; index++)
			{
				if (pass[index] >= (33 + dh1))
				{
					pass[index] -= dh1;
					break;
				}
			}

				for (index = 0; pass[index]; index++)
				{
					if (pass[index] >= (33 + dh2))
					{
						pass[index] -= dh2;
						break;
					}
				}
	}
		printf("%s", pass);
		return (0);
}
	

