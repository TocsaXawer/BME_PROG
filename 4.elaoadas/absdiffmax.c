#include <stdio.h>

int main(void)
{
	int a, min, max;					// változók
	scanf("%d", &a);					// első érték beolvasása
	if (a < 0) a = -a;					// abszolút érték kezelése
	min = a;
	max = a;
	while (a != 0)						// végjeles sorozat
	{
		if (a > max)					// szélsőértékek nyilvántartása
			max = a;
		if (a < min)
			min = a;
		scanf("%d", &a);				// következő érték beolvasása
		if (a < 0) a = -a;				// abszolút érték kezelése
	}
	printf("%d", max-min);				// eredménykiírás
	return 0;
}
