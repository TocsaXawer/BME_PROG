/* egész szám tárolására bevezetett típus */
typedef @char@ @egesz@;

int main(){
	egesz i;
	char ch;
	scanf("%c",&ch);
	for(i=0; i<10; i=i+1)
		printf("%c",ch);
	return 0;
}

typedef struct @_hallg@{
	char neptun[6];
	egesz kiszhpont, hianyzasok;
} hallgato_adat;
