#include <stdio.h>
int main() {
	int n;
	printf("Adja meg a jegyet: ");
	scanf("%d", &n);
	switch (n)
	{
		case 1: printf("elégtelen");
		case 2: printf("elégséges");
		case 3: printf("közepes");
		case 4: printf("jó");
		case 5: printf("jeles");
		default: printf("baj van");
	}
	return 0;
}
