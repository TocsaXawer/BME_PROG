#include <stdio.h>
int main()
{
	double d;
	while (scanf("%lf", &d) == 1)
		printf("%f ", d/180.0*3.141592); /* majdnem */
	return 0;
}