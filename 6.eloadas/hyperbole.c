int hyperbole(double x, double *py)
@{@
	if (abs(x) < 1e-10)
		@return 0@;
	@*py = 1.0 / x@;
	@return 1@;
}

int main(void)
{
	double y;
	int status;
	@status = hyperbole(0.0, &y)@;
	@status = hyperbole(2.0, &y)@;
	return 0;
}
