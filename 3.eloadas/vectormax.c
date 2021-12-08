#include <stdio.h>

int main()
{
	int a;
	int max;
	scanf("%d", &a);
	max=a;
	while (a != 0)
	{
		if (a > max)
			max = a;
		scanf("%d", &a);
	}
	printf("%d", max);
	return 0;
}
