#include <stdio.h>
int main() {
	int n;
	printf("Adja meg a jegyet: ");
	scanf("%d", &n);
	switch (n)
	{
		case 1: printf("megbukott");
		case 2:
		case 3:
		case 4:
		case 5: printf("átment");
		default: printf("baj van");
	}
	return 0;
}
