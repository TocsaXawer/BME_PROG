#include <stdio.h>

int main()
{
	int a;
	int prod;
	prod = 1;
	scanf("%d", &a);
	while (a != 0)
	{
		prod = prod * a;
		scanf("%d", &a);
	}
	printf("%d", prod);
	return 0;
}

