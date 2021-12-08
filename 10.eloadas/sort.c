/**
 * \file sort.c
 * \author Fiala Péter fiala@hit.bme-hu
 * \brief rendező algoritmusok összehasonlítása
 * \details A program összehasonlít öt rendező algoritmust
 * - a közvetlen beszúrást
 * - a közvetlen kiválasztást
 * - a buborékalgoritmust
 * - a javított buborékalgoritmust
 * - a gyorsrendezést
 * a szükséges összehasolítások és mozgatások száma szerint
 */

#include <stdlib.h>
#include <stdio.h>
#include <time.h>

enum {
	N = 10000	/**< \brief a rendezendő tömb mérete */ 
};

size_t nComp;	/**< \brief Összehasonlítások száma */
size_t nMov;	/**< \brief Mozgatások száma */

/**
 * \brief két elem összehasonlítása
 * \param a az egyik összehasonlítandó elem címe
 * \param b a másik összehasonlítandó elem címe
 * \return pozitív, ha *a > *b, 0, ha egyenlőek, negatív egyébként
 */
int comp(int *a, int *b)
{
	nComp++;
	return *a - *b;
}


/**
 * \brief két elem cseréje
 * \param a az egyik cserélendő elem címe
 * \param b a másik cserélendő elem címe
 */
void xchg(int *a, int *b)
{
	int tmp = *a;
	*a = *b;
	*b = tmp;
	nMov+=3;
}


/**
 * \brief elem mozgatása
 * \param dst a cél címe
 * \param src a forrás címe
 */
void move(int *dst, int *src)
{
	nMov++;
	*dst = *src;
}


/**
 * \brief rendezés közvetlen kiválasztással
 * \param a a rendezendő tömb
 */
void selection_sort(int arr[])
{
	size_t i;
	nComp = nMov = 0;
	for (i = 0; i < N-1; ++i)
	{
		size_t iMin = i, j;
		for (j = i+1; j < N; ++j)
			if (comp(arr+j, arr+iMin) < 0)
				iMin = j;
		xchg(arr+iMin, arr+i);
	}
}



/**
 * \brief rendezés közvetlen beszúrással
 * \param arr a rendezendő tömb
 */
void insertion_sort(int *arr)
{
	size_t i;
	nComp = nMov = 0;
	for (i=1; i<N; ++i)
	{
		int s;
		size_t a, f, k, j;
		move(&s, arr+i);
		for (a=0, f=i; a<f; )
		{
			k = (a+f)/2;
			if (comp(arr+k, &s) >= 0)
				a = k+1;
			else
				f=k;
		}
		for (j=i; j>a; j--)
			move(arr+j, arr+j-1);
		move(arr+a, &s);
	}
}



/**
 * \brief buborékrendezés
 * \param a a rendezendő tömb
 */
void bubble_sort(int *a)
{
	size_t i, iter;
	nComp = nMov = 0;
	for (iter = 0; iter < N-1; ++iter)
		for (i = 0; i < N-iter-1; ++i)
			if (comp(a+i, a+i+1) > 0)
				xchg(a+i, a+i+1);
}


/**
 * \brief javított buborékrendezés
 * \param a a rendezendő tömb
 */
void bubble2_sort(int *a)
{
	size_t stop = N-1;
	nComp = nMov = 0;
	while (stop > 0)
	{
		size_t newstop = 0, i;
		for (i = 0; i < stop; ++i)
			if (comp(a+i, a+i+1) > 0)
			{
				xchg(a+i, a+i+1);
				newstop = i;
			}
		stop = newstop;
	}
}


/**
 * \brief quicksort
 * \param a a rendezendő tömb
 * \param n a tömb mérete
 */
void quicksort(int array[], int n)
{
	int pivot;
	int i = 0, j = n;
	move(&pivot, array+n/2);
	while (i < j) {
		if (comp(array+i, &pivot) < 0)
			i++;
		else {
			j--;
			if (comp(array+j, &pivot) <= 0)
				xchg(array+i, array+j); /* fv-nyel */
		}
	}

	if (i > 1)
		quicksort(array, i);           /* rekurzív hívások */
	if (n-i-1 > 1)
		quicksort(array+i+1, n-i-1);
}


/**
 * \brief véletlen tömbgenerálás
 * \param a a tömb kezdőcíme
 */
void generate_random_array(int a[])
{
	size_t i;
	for (i = 0; i < N; ++i)
		a[i] = rand() % 10000000;
}


/**
 * \brief rendezett tömbgenerálás
 * \param a a tömb kezdőcíme
 */
void generate_sorted_array(int a[])
{
	size_t i;
	for (i = 0; i < N; ++i)
		a[i] = i;
}


/**
 * \brief tömb másolása
 * \param dst a céltömb kezdőcíme
 * \param src a forrástömb kezdőcíme
 */
void copy_array(int dst[], int src[])
{
	size_t i;
	for (i = 0; i < N; ++i)
		dst[i] = src[i];
}


/**
 * \brief tömb kiírása
 * \param a a tömb
 */
void print_array(int a[])
{
	size_t i;
	for (i = 0; i < N; ++i)
		printf("%d\n", a[i]);
}


/**
 * \brief főprogram
 */
int main(void)
{
	int a0[N], a[N];

	srand((unsigned)time(NULL));
	
	generate_random_array(a0);

	printf("\n");
	printf("modszer:     |hasonlitas | mozgatas\n");
	printf("-----------------------------------\n");
	copy_array(a, a0);
	selection_sort(a);
	printf("Kivalasztas: |%10u |%10u\n", nComp, nMov);

	copy_array(a, a0);
	insertion_sort(a);
	printf("Beszuras:    |%10u |%10u\n", nComp, nMov);

	copy_array(a, a0);
	bubble_sort(a);
	printf("Buborek:     |%10u |%10u\n", nComp, nMov);

	copy_array(a, a0);
	bubble2_sort(a);
	printf("Buborek2:    |%10u |%10u\n", nComp, nMov);
		
	copy_array(a, a0);
	nComp = nMov = 0;	/* itt kell a rekurzív hívások miatt */
	quicksort(a, N);
	printf("quicksort:   |%10u |%10u\n", nComp, nMov);
		
	return 0;
}

