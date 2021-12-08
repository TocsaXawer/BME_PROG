#include <stdio.h>

int a, b;

void func(int a)
{
	a = 2;
	b = 3;
}

int main(void)
{
	a = 1;
	func(a);
	printf("a: %d, b: %d\n", a, b);
	return 0;
}

