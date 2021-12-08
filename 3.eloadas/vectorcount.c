#include <stdio.h>

int main()
{
	int a;
	int n;
	n=0;
	scanf("%d", &a);
	while (a != 0)
	{
		if (a>=10 && a<=99)
			n = n+1;
		scanf("%d", &a);
	}
	printf("%d", n);
	return 0;
}