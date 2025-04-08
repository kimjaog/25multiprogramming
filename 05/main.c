#include <stdio.h>

int main()
{
	if (1)
	{
		int i = 5;
		printf("*");
		{
			printf("*\n");
				i = i - 1;
		}
	}

	return 0;
}
