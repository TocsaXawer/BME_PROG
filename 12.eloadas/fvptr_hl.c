@double (*fx)(double)@;
fx = @sqrt@;
printf("%f\n", @fx(5.0)@);  /* sqrt(5.0) */
fx = sin;                 /* <math.h> */
printf("%f\n", fx(1.57)); /* sin(1.57) */

@double (*(ftrig[2]))(double)@ ={sin, cos};

for (i = 0; i < 2; ++i)
	printf("%f\n", ftrig[i](3.14));
	
typedef double (*@fvptr@)(double);
fvptr fhyp[]={sinh, cosh};