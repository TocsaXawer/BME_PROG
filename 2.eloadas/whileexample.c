/* whileexample.c példaprogram a while ciklus bemutatásához */
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
