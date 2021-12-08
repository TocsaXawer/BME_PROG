#include <stdio.h>

int main()
{
	int a;
	int min;
	scanf("%d", &a);
	min=a;
	while (a != 0)
	{
		if (a < min)
			min = a;
		scanf("%d", &a);
	}
	printf("%d", min);
	return 0;
}
