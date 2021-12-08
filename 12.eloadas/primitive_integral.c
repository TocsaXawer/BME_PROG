double xsquare(double x)
{
	return x*x;
}
double integral_x2(double a, double b,
                   unsigned n)
{
	double dx = (b-a)/n, sum=0.0, x;
	unsigned i;

	for (x=a, i=0; i<n; x+=dx, i++)
		sum += xsquare(x) * dx;

	return sum;
}

double xcube(double x)
{
	return x*x*x;
}
double integral_x3(double a, double b,
                   unsigned n)
{
	double dx = (b-a)/n, sum=0.0, x;
	unsigned i;

	for (x=a, i=0; i<n; x+=dx, i++)
		sum += xcube(x) * dx;

	return sum;
}

double integral_x2(double a, double b, unsigned n);
double integral_x3(double a, double b, unsigned n);
double integral_sin(double a, double b, unsigned n);
double integral_sqrt(double a, double b, unsigned n);
