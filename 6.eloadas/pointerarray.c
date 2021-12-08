int t[5] = {1,4,2,7,3};
int *p, i;

p = &t[0];
for (i = 0; i < 5; ++i)
	printf("%d ", @*(p+i)@);

int t[5] = {1,4,2,7,3};
int *p, i;

p = &t[0];
for (i = 0; i < 5; ++i)
	printf("%d ", @p[i]@);

int t[5] = {1,4,2,7,3};
int *p, i;

@p = t;@ /* &t[0] */
for (i = 0; i < 5; ++i)
	printf("%d ", p[i]);
