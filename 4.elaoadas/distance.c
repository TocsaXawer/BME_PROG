double distance(double a, double b)
{
	...
}

double x = @distance@(@2.0, 3.0@); /* x 1.0 lesz */

double a = 1.0;
double x = distance(2.5-1.0, a); /* x 0.5 lesz */

double x = 1.0;
if (distance(2.0*x, 3.0) > 5.0)
	printf("Messze vannak");
