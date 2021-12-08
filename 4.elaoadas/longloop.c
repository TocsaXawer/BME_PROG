#include <limits.h> /* egész határokhoz */
#include <stdio.h>  /* printf-hez */

int main(void)
{ /* majdnem összes long long int */
	long long i;

	for (i = LLONG_MIN; i < LLONG_MAX; i = i+1)
		printf("%lld\n", i);

	return 0;
}

