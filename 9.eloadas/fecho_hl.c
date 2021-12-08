#include <stdio.h>
int main()
{
	char c;
	FILE *fp = fopen("fajl.txt", "r"); /* fájlnyitás */
	if (fp == NULL)
		return -1; /* sikertelen volt */

	/* olvasás, amíg sikeres (1 karakter jött) */
	@while (fscanf(fp, "%c", &c) == 1)@
		printf("%c", c);

	fclose(fp); /* lezárás */
	return 0;
}
