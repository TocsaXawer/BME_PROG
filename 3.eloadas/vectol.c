#include <stdio.h>

int main()
{
	char a;
	while(scanf("%c", &a) == 1)/*scanf mint kifejezés*/
	{
		switch(a)
		{
		case 'R': printf("L"); break; /* ' " */
		case 'r': printf("l"); break;
		default: printf("%c", a);
		}
	}
	return 0;
}
