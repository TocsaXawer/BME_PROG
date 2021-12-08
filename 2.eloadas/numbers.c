#include <stdio.h>
int main(void)
{
	printf("1\n");
	printf("2\n");
	/* ... a többi */
	printf("10\n");
	return 0;
}

/*@Jelöljön n egy egész számot@
@n '$\leftarrow$' 1@
@AMÍG n <= 1000@
	@Írd ki n értékét (+újsor)@
	@n '$\leftarrow$' n+1@
*/
#include <stdio.h>
int main(void)
{
	int n;
	n = 1;
	while (n <= 1000)
	{
		printf("%d\n", n);
		n = n+1;
	}
	return 0;
}
