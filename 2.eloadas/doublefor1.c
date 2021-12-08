#include <stdio.h>

int main()
{
	int row;
	for (row = 1; row <= 10; row=row+1)
	{
		int col;     /* blokk elején deklaráció */
		for (col = 1; col <= 10; col=col+1)
			printf("%4d", row*col); /* kiírás 4 szélesen */
		printf("\n"); /* már nincs benne a col for-ban */
	}
	
	return 0;
}
