#include <stdio.h>
int main()
{
	int sum = 0, n;
	do
	{
		printf("A következő szám: ");
		scanf("%d", &n);
		sum = sum+n;
	}
	while (sum <= 10);
	return 0;
}
/*
sum '$\leftarrow$' 0
ISMÉTELD
	KI: Infó
	BE: n
	sum '$\leftarrow$' sum+n
AMÍG sum '$\le$' 10

do
@{@
	printf("A következő szám: ");
	scanf("%d", &n);
	sum = sum+n;
}
while (@sum <= 10@);
*/
