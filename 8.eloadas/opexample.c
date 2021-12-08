a+=2;
t[i++]=fv(a=c);
a=c;
t[i]=fv(a);
i++;

int a1=2, a2=3, meret;
double b;
b = a1/@(double)a2@;
meret = @sizeof 3/a1@;
meret = @sizeof(double)a1@;
meret = @sizeof(double)@;

double x, abs_x;
scanf("%lf", &x);
/* Abszolut ertek */
abs_x = @x<0 ? -x : x;

int step, j;
/* A ketjegyűek növekvő lépésközzel */
for(@step=1,j=10@; j<100; j+=step, step++)
	printf("%d\n", j);


