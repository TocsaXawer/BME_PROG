#include <stdio.h> /* scanf, printf */

int low, high; /* globális változók */

void read(void) /* beolvasó függvény */
{
	printf("Kérek egy kisebb és egy nagyobb számot!\n");
	scanf("%d%d", &low, &high);
}

int isprime(int p) /* prímtesztelő fv. */
{
	int i;
	for (i=2; i*i<=p; i=i+1)    /* i 2-től p gyökéig */
		if (p%i == 0)  /* ha p osztható i-vel, nem prím */
			return 0;
	return 1; /* ha ide eljutottunk, prím */
}

int main()
{
	int i;
	
	read(); /* függvénnyel beolvassuk a határokat */
	
	printf("Prímek %d és %d között:\n", low, high);
	for (i=low; i<=high; i=i+1)
	{
		if (isprime(i)) /* függvénnyel tesztelünk */
			printf("%d\n", i);
	}
			
	return 0;
}
