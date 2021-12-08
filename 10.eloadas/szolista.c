#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<stdlib.h>

typedef struct listaelem{
	char szo[51];
	unsigned darab;
	struct listaelem* kovetkezo;
}listaelem, *lista;

lista ureslista()
{
	lista ujlista = (listaelem*)malloc(sizeof(listaelem));
	ujlista->szo[0] = '\0';
	ujlista->darab = 0;
	ujlista->kovetkezo = NULL;
	return ujlista;
}

int irasjel(char ch)
{
	return ch == ',' || ch == '.' || ch == '!' || ch == '?'; 
}
void kisbetusit(char str[])
{
	int i;
	for (i = 0; str[i] != '\0' && !irasjel(str[i]); i++)
		str[i] = tolower(str[i]);
	str[i] = '\0';
}

void nevsorbaszur(lista szolista, char ujszo[])
{
	listaelem* p;
	for (p = szolista; p->kovetkezo != NULL && strcmp(p->kovetkezo->szo,ujszo) <= 0; p = p->kovetkezo);
	if (strcmp(p->szo, ujszo) == 0)
	{
		p->darab++;
	}
	else
	{
		listaelem* q = p->kovetkezo;
		p->kovetkezo = (listaelem*)malloc(sizeof(listaelem));
		p->kovetkezo->darab = 1;
		strcpy(p->kovetkezo->szo, ujszo);
		p->kovetkezo->kovetkezo = q;
	}
}

void kiir(lista szolista)
{
	listaelem* p;
	for (p = szolista->kovetkezo; p != NULL; p = p->kovetkezo)
	{
		printf("%s\t%u\n", p->szo, p->darab);
	}
}

void atrendez(lista szolista)
{
	lista ujlista = NULL;
	listaelem* regiek = szolista->kovetkezo;

	ujlista = szolista;
	ujlista->kovetkezo = NULL;
	
	while (regiek != NULL)
	{
		listaelem* p = regiek;
		listaelem* q;

		regiek = regiek->kovetkezo;

		for (q = ujlista; q->kovetkezo != NULL && q->kovetkezo->darab <= p->darab; q = q->kovetkezo);

		p->kovetkezo = q->kovetkezo;
		q->kovetkezo = p;
	}
}

void felszabadit(lista szolista)
{
	while (szolista != NULL)
	{
		listaelem* p = szolista->kovetkezo;
		free(szolista);
		szolista = p;
	}
}

int main(void)
{
	char puffer[51];
	lista szolista=ureslista();

	while(scanf("%50s", puffer) == 1)
	{
		kisbetusit(puffer);
		if(puffer[0] != '\0')
			nevsorbaszur(szolista, puffer);
	}
	atrendez(szolista);
	kiir(szolista);
	felszabadit(szolista);
	return 0;
}