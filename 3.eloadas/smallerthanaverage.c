#include <stdio.h>

int main(void)
{
	/* deklarációk */
	double array[10];
	int i, n;
	double mean;
	
	/* tömb feltöltése */
	for (i=0; i<10; i=i+1)
		scanf("%lf", &array[i]);

	/* átlag számítása */
	mean = 0.0;
	for (i=0; i<10; i=i+1)
		mean = mean + array[i];
	mean = mean / 10;

	/* leszámlálás */
	n = 0;
	for (i=0; i<10; i=i+1)
	{
		if (array[i] < mean)
			n = n+1;
	}

	/* válasz */
	printf("%d", n);
	return 0;
}

