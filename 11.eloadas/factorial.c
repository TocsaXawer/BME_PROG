unsigned fact_rec(unsigned n)
{
	if (n == 0)
		return 1;
	return fact_rec(n-1) * n;
}


unsigned fact_iter(unsigned n)
{
	unsigned f = 1, i;
	for (i = 2; i <= n; ++i)
		f *= i;
	return f;
}

#include <stdio.h>
int main(void)
{
    int i;
	for (i = 0; i < 50; ++i)
		printf("%d: %d\n", i, fact_rec(i));
	return 0;
}

