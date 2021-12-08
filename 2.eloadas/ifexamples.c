#include <stdio.h>
int main()
{
	int x;
	printf("Adjon meg egy számot: ");
	scanf("%d", &x);
	if (x < 10)        /* feltétel */
		printf("kicsi"); /*igaz ág*/
	else
		printf("nagy");  /*hamis ág*/
	return 0;
}

Legyen x egész
KI: infó
BE: x
HA x < 10
	KI: kicsi
EGYÉBKÉNT
	KI: nagy

if (@x < 10@)        /* feltétel */
	@printf("kicsi");@ /* igaz ág */
else
	@printf("nagy");@ /* hamis ág */

if (a < 0)      /* abszolútérték képzése */
	a = -a;
/* nincs hamis ág */
