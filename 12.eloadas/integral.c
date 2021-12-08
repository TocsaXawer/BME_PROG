#include<stdio.h>

double xsquare(double x)
{
	return x*x;
}

double xcube(double x)
{
	return x*x*x;
}

double integral(double (*fx)(double),  
                double a, double b, unsigned n)
{
	double dx=(b-a)/n, sum=0.0, x;
	unsigned i;

	for(x=a, i=0; i<n; x+=dx, i++)
		sum += fx(x) * dx;

	return sum;
}

int main(void)
{
	printf("%f\n", integral(xsquare, 1.0, 5.0, 100));
	printf("%f\n", integral(xcube, 1.0, 5.0, 100));
	return 0;
}

