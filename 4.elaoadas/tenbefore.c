#include <stdio.h>

int main(void)
{
	double  q[100], a;	// tömb definíció, változók
	int i, N = 0, db;
	scanf("%lf", &a);           // végjeles vektor első eleme
	while (a != 0.0) {
		q[N] = a;				// tömb feltöltés
		N = N + 1;				//méret nyilvántartás
		scanf("%lf", &a);       
	}                           
	db = 0;                      
	for (i = 10; i < N; i = i + 1)    // a 10-es elemtől kezdjük és csak N-ig megyünk
		if (q[i] > q[i-10])		// a 10-zel megelőző elem
			db = db + 1;
	printf("%d", db);
	return 0;
}
// Ha olyan tömböt használunk, ami mindig csak az utolsó 10 elemet tárolja, az is jó lehet természetesen.
