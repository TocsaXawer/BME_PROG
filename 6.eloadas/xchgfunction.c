void xchg(int x, int y) @{@
	@int tmp = x;@
	@x = y;@
	@y = tmp;@
@}@

void xchgp(int *px, int *py) @{@
	@int tmp = *px;@
	@*px = *py;@
	@*py = tmp;@
@}@

int main(void) {
	@int a = 2, b = 3;@
	@xchg(a, b);@   /* nem cserél*/
	@xchgp(&a, &b);@/* cserél */
	return 0;
}
