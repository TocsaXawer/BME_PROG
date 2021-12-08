#include <stdio.h>

enum direction {LEFT, RIGHT, UP, DOWN};
typedef  enum direction  direction; /* egyszerűsítés */

direction read_direction(void)
{
	char ch;
	scanf("%c", &ch);
	switch (ch)
	{
	case 'a': return LEFT;
	case 'w': return UP;
	case 'd': return RIGHT;
	case 's': return DOWN;
	}
	return LEFT;
}

int main(void)
{
direction d = read_direction();
if (d == RIGHT)
	printf("Megevett egy tigris\n");

return 0;
}


enum direction d;
d = LEFT;
