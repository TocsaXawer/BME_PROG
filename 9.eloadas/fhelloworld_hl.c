#include <stdio.h> /* fopen, fprintf, fclose */
int main(void)
{
	FILE *fp;
	int status;

	fp = @fopen("hello.txt", "w")@;  /* fájlnyitás */
	if (fp == NULL)                 /* nem sikerült */
		return 1;

	@fprintf(fp, "Szia, világ!\n")@;  /* beírás */

	status = @fclose(fp)@;            /* lezárás */
	if (status != 0)
		return 1;

	return 0;
}
