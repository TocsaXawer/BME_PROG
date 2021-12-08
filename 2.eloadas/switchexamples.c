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

Legyen n egész
BE: n
n vizsgálata
	HA 1, KI: elégtelen
	HA 2, KI: elégséges
	HA 3, KI: közepes
	HA 4, KI: jó
	HA 5, KI: jeles
	EGYÉBKÉNT KI: baj van

switch (@n@)
{
	case @1@: @printf("elégtelen"); break;@
	case @2@: @printf("elégséges"); break;@
	case 3: printf("közepes"); break;
	case 4: printf("jó"); break;
	case 5: printf("jeles"); break;
	default: @printf("baj van");@
}

switch (n)
{
	case 1: printf("elégtelen");
	case 2: printf("elégséges");
	case 3: printf("közepes");
	case 4: printf("jó");
	case 5: printf("jeles");
	default: printf("baj van");
}

switch (n)
{
	case 1: printf("megbukott"); break;
	case @2@:
	case 3:
	case 4:
	case 5: printf("átment"); break;
	default: printf("baj van");
}

