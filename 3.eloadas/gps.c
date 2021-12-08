#include <stdio.h>
#include <math.h>

int main()
{
	double R = 6371, r = 4328;
	double phi1, phi2, lam1, lam2, D = 0.0;
	scanf("%lf%lf", &phi1, &lam1);
	while (scanf("%lf%lf", &phi2, &lam2) == 2) {
		double dx = r * (phi2-phi1);
		double dy = R * (lam2-lam1);
		D = D + sqrt(dx*dx + dy*dy);
		phi1 = phi2;
		lam1 = lam2;
	}
	printf("A megtett tav: %f km\n", D);
	return 0;
}

