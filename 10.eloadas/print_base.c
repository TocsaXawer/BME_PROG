#include <stdio.h>

void print_base_rec(unsigned n, unsigned base)
{
	if (n >= base)
		print_base_rec(n/base, base);
	printf("%d", n%base);
}

void print_base_iter(unsigned n, unsigned base)
{
	unsigned d; /* n-nél nem nagyobb base-hatvány */
	for (d = 1; d*base <= n; d*=base);
	while (d > 0)
	{
		printf("%d", (n/d)%base);
		d /= base;
	}
}

int main(void)
{
	print_base_rec(28, 3);
	printf("\n");
	print_base_iter(28, 3);
	return 0;
}
