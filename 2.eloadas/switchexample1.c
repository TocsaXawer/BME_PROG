#include <stdio.h>
int main() {
	int n;
	printf("Adja meg a jegyet: ");
	scanf("%d", &n);
	switch (n)
	{
		case 1: printf("elégtelen"); break;
		case 2: printf("elégséges"); break;
		case 3: printf("közepes"); break;
		case 4: printf("jó"); break;
		case 5: printf("jeles"); break;
		default: printf("baj van");
	}
	return 0;
}
