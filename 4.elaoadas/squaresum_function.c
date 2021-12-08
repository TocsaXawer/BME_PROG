#include <stdio.h>

int squaresum(int n) /* függvénydefiníció */
{
	int i, sum = 0;
	for (i = 1; i < n; i = i+1)
		sum = sum + i*i;
	return sum;
}

int main(void) /* főprogram */
{
	int sum1, sum2, sum3;
	
	sum1 = squaresum(12); /* függvényhívás */
	sum2 = squaresum(24);
	sum3 = squaresum(30);

	printf("%d, %d, %d\n", sum1, sum2, sum3);
	return 0;
}
