#include <stdio.h>

double *first_negative(double *array, size_t size)
{
	size_t i;
	for (i = 0; i < size; ++i)  /* minden elemre */
		if (array[i] < 0.0)
			return &array[i];

	return NULL; /* mind nemnegatív */
}

int main(void)
{
double myarray[3] = {3.0, 1.0, -2.0};
double *neg = first_negative(myarray, 3);
if (neg != NULL)
    printf("Az első negatív szám: %f", *neg);
else
    printf("Nincs negatív.");

return 0;
}
