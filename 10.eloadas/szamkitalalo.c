#include <stdio.h>
int main() {
	int a=1,f=127;
	printf("Gondolj egy szamra %d es %d kozott!\n",a,f);

	while (1) {
		int v, k = (a+f)/2;
		printf("%d?\t", k);
		scanf("%d", &v);
		if(v==0)
 			break;
		if(v>0)
			a=k+1;
		else 
			f=k-1;
	}
	return 0;
}

