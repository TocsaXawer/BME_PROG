#include <stdio.h>
int main()
{
	int n;
	n = 1; /* inicializálás */
	while (n <= 10) /* feltétel */
	{
		printf("%d ", n*n);/* Kiírás */
		n = n+1;          /* növelés */
	}
	return 0;
}

Legyen n egész
n '$\leftarrow$' 1
AMÍG n <= 10
	KI: n*n
	n '$\leftarrow$' n+1

while (@n <= 10@)
@{@
	printf("%d ", n*n);
	n = n+1;
}
