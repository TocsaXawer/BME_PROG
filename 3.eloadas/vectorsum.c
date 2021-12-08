#include <stdio.h>

int main()
{
	int a;
	int sum;
	sum = 0;
	scanf("%d", &a);
	while (a != 0)
	{
		sum = sum + a;
		scanf("%d", &a);
	}
	printf("%d", sum);
	return 0;
}

