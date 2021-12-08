#include <stdio.h>

int main()
{
	int a;
	double sum;
	int n;
	sum = 0.0;
	n=0;
	scanf("%d", &a);
	while (a != 0)
	{
		sum = sum + a;
		n = n+1;
		scanf("%d", &a);
	}
	printf("%f", sum/n);
	return 0;
}

