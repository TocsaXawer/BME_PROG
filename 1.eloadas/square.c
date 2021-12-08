/* square.c -- szám négyzetreemelése */
#include <stdio.h>
int main()
{
	int num;                  /* egész változó dekl. */
	printf("Adj meg egy egész számot: ");    /* info */
	scanf("%d", &num);                  /* beolvasás */
	/* két kifejezés értékének kiírása */
	printf("%d négyzete: %d\n", num, num*num);
	return 0;
}
