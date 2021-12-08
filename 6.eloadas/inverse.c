int inverse(double x, double *py)
{
	if (abs(x) < 1e-10) return 0;
	*py = 1.0 / x;
	return 1;
}

#include <stdio.h>

int main(void)
{
double y;       /* helyfoglalás az eredménynek */
int success = inverse(5.0, &y);
if (success)
	printf("%f reciproka %f\n", 5.0, y);
else
	printf("Nem képezhető a reciprok");
return 0;
}

