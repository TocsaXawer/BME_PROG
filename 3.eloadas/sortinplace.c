#include <stdio.h>

int main(void)
{
int data[8] = {-5, 4, 2, 3, -4, -2, 3, 5};
int i = 0, j = 8;
while (i < j)
{
	if (data[i] >= 0)
		i=i+1;
	else
	{
		int xchg;
		j=j-1;
		xchg = data[i];    /* változó értékek cseréje */
		data[i] = data[j]; /* nagyon gyakori fordulat */
		data[j] = xchg;
	}
}
printf("Az első negatív elem indexe: %d", i);
return 0;
}

