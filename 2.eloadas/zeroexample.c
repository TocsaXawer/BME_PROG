#include <stdio.h>

int main()
{
	double n = 0.0, p = 2.0;
	while (p-n > 0.001)
	{
		double k = (n+p)/2.0;
		if (k*k-2.0 > 0.0)
			p = k;
		else
			n = k;
	}
	printf("A gyökhely: %f", n);

	return 0;
}

