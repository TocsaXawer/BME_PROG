unsigned fib_rec(unsigned n)
{
	if (n <= 1)
		return n;
	return fib_rec(n-1) + fib_rec(n-2);
}

unsigned fib_iter(unsigned n)
{
	unsigned f[2]= {0, 1}, i;
	for (i = 2; i <= n; ++i)
		f[i%2] = f[(i-1)%2] + f[(i-2)%2];
	return f[n%2];
}

#include <stdio.h>
int main(void)
{
    int i;
	for (i = 0; i < 60; ++i)
		printf("%d: %d\n", i, fib_rec(i));
	return 0;
}

