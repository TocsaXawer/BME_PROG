#include <stdio.h> /* printf-hez */

int main(void)
{
	int i, sum; /* iterátor és a négyzetösszeg*/
	
	sum = 0;                     /* inicializálás */
	for (i = 1; i < 12; i = i+1) /* i = 1,2,...,11 */
		sum = sum + i*i;           /* összegzés */
	
	printf("A négyzetösszeg: %d\n", sum);
	return 0;
}
