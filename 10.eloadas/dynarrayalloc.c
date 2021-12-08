@double **d =(double**)malloc(3*sizeof(double*))@;
@d[0] = (double*)malloc(3*4*sizeof(double))@;
for (i = 1; i < 3; ++i)
	@d[i] = d[i-1] + 4@;
