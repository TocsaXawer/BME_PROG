/* Téglalap területe */
int area(int x, int y)
{
	@int S;@
	@S = x * y;@
	@return S;@
}

/* Főprogram */
int main(void)
{
	@int a, b, T;@
	@a = 2;@             /* alap */
	@b = 3;@         /* magasság */
	@T = area(a, b);@ /* Terület */
	@return 0;@
}
