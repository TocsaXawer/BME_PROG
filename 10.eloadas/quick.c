void xchg(int *x, int *y)
{
    int tmp = *x;
    *x = *y;
    *y = tmp;
}

void qsort(int array[], int n)
{
	int pivot = array[n/2];     /* kritikus! */
	int i = 0, j = n;
	while (i < j) {
		if (array[i] < pivot)
			i++;
		else {
			j--;
			if (array[j] <= pivot)
				xchg(array+i, array+j); /* fv-nyel */
		}
	}

	if (i > 1)
		qsort(array, i);           /* rekurzív hívások */
	if (n-i-1 > 1)
		qsort(array+i+1, n-i-1);
}

#include <stdio.h>
int main(void)
{
    int array[] = {1, -5, 7, 5, 8, 12, 24, -29}, i;
    qsort(array, 8);
    for (i = 0; i < 8; ++i)
        printf("%4d", array[i]);
    return 0;
}
