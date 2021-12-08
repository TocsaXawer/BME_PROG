@Jelöljön n egész számot@
@n '$\leftarrow$' 1@
@AMÍG n <= 1000@
	@KI: n (+újsor)@
	@HA n páros@
		@KI: páros@
	@EGYÉBKÉNT@
		@KI: ptln@
	@n '$\leftarrow$' n+1@

#include <stdio.h>
int main(void)
{
	@int n;@
	@n = 1;@
	@while (n <= 1000)@
	{
		@printf("%d\n", n);@
		@if (n%2 == 0)@
			@printf("páros\n");@
		@else@
			@printf("páratlan\n");@
		@n = n+1;@
	}
	return 0;
}


if (n%2 == 0)
	printf("páros\n");
else
	printf("páratlan\n");
