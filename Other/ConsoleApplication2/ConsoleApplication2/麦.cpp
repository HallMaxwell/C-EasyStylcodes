#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	for (int n = 1; n <= 33; n++)
	{
		for (int x = 1; x <= 100; x++)
		{
			if (3 * n == x)
			{
				printf("��\n");
			}
			if (5 * n == x)
			{
				printf("��\n");
			}
			if ((3 * n == x) && (5 * n == x))
			{
				printf("����\n");
			}
		}
	}
	return 0;
}