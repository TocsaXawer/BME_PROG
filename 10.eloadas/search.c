#include<stdio.h>

typedef int kulcs_tipus; /* pl. cikkszám */

typedef struct{
	kulcs_tipus kulcs;
	double ar;
} tombelem;

tombelem lin_keres_elem(tombelem t[], int n,
                        kulcs_tipus kul)
{
	int i;
	for(i=0; i<n; i++)
		if(t[i].kulcs == kul)
			return t[i];
	return t[0]; /* ajjaj */
}

int lin_keres_ind(tombelem t[], int n,
                  kulcs_tipus kul)
{
	int i;
	for(i=0; i<n; i++)
		if(t[i].kulcs == kul)
			return i;
	return n;
}

tombelem* linrend_keres(tombelem t[], int n,
                        kulcs_tipus kul)
{
	int i;
	for(i=0; i < n; i++)
		if(t[i].kulcs >= kul)
			return t+i;
	return NULL;
}

int log_keres(tombelem t[], int n,
              kulcs_tipus kul) {
	int a=0, f=n-1, k;
	while(a<f) {
		k = (a+f)/2;
		if(kul == t[k].kulcs)
			return k;
		if(kul > t[k].kulcs)
			a=k+1;
		else
			f=k-1;
	}
 	return kul <= t[k].kulcs ? k : k+1;
}

int main(void)
{
	tombelem ttomb[]={{876,87.6},{123,12.3},{555,55.5},{456,45.6}};

	tombelem rendtomb[]={{123,12.3},{456,45.6},{555,55.5},{876,87.6}};

	printf("%d ", lin_keres_ind(ttomb, 4, 555));
	printf("%d\n", lin_keres_ind(ttomb, 4, 777));

	printf("%f ", (lin_keres_elem(ttomb, 4, 555)).ar);
	printf("%f\n", (lin_keres_elem(ttomb, 4, 777)).ar);

	printf("%p ", linrend_keres(rendtomb, 4, 555));
	printf("%p\n", linrend_keres(rendtomb, 4, 777));

	printf("%d ", log_keres(rendtomb, 4, 555));
	printf("%d\n", log_keres(rendtomb, 4, 777));

	return 0;
}
