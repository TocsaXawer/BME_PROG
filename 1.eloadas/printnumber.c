/* printnumber.c -- szám kiírása */
#include <stdio.h>
int main()
{
	int num;        /* num nevű egész változó dekl. */
	num = 2;        /* num <- 2 értékadás */
	printf("A szám értéke: %d\n", num); /* kiírás */
	num = -5;       /* num <- -5 értékadás */
	printf("A szám értéke: %d\n", num); /* kiírás */
	return 0;
}
