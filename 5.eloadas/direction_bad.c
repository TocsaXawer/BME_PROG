#include <stdio.h>
/*
char read_direction(void)
{
	char ch;
	scanf("%c", &ch);
	return ch;
}
*/
int read_direction(void) {
	char ch;
	scanf("%c", &ch);
	switch (ch) {
	case 'a': return 0; /* bal */
	case 'w': return 1; /* fel */
	case 'd': return 2; /* jobb */
	case 's': return 3; /* le */
	}
	return 0; /* bal default :) */
}


int main(void)
{
int d = read_direction();
if (d == 2) /* "magic" konstans, mit is jelent? */
	printf("Megevett egy tigris\n");

 return 0;
}
