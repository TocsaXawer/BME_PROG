/*
  faktoriális rekurzív függvény
 */
unsigned factorial(unsigned n)
@{@
	if (@n > 0@)
		@return factorial(n-1) * n;@
	else
		@return 1;@
@}@

int main(void)
{
	...
	@ factorial(4);@
	...
}

