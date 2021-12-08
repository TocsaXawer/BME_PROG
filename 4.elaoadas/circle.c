#include <stdio.h>

int main(void)
{
	int x, y, R;                    	// változók
	scanf("%d", &R);                	// sugár beolvasása
	for (y = 1; y <= 10; y = y+1)   	// ciklus: sorok
	{                               	
		for (x = 1; x <= 10; x = x+1)	// ciklus: oszlopok az aktuális sorban
			if (x*x + y*y < R*R)    	// választás
				printf("#");        	// karakterkiírás
			else                    	
				printf(".");        	// karakterkiírás
		printf("\n");               	// újsor kiírása
	}
	return 0;
}                                   
