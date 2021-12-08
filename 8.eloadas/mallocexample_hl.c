#include <stdlib.h>
#include <stdio.h>

int main(void)
{
int n, i;
int *p;

printf("Hányat olvassak be? ");
scanf("%d", &n);
@p = (int*)@@malloc(n*sizeof(int))@;
if (p == NULL) return;

printf("Kérek %d számot:\n", n);
for (i = 0; i < n; ++i)
	scanf("%d", &p[i]);

printf("Fordítva:\n");
for (i = 0; i < n; ++i)
	printf("%d ", p[n-i-1]);

@free(p)@;
@p = NULL@;
return 0;
}
