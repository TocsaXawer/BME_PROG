typedef double voltage;

voltage V1 = 1.0;
double c = 2.0;
voltage V2 = c * V1;

typedef @long double@ voltage; /* pontosabb kell */

voltage V1 = 1.0;
double c = 2.0;
voltage V2 = c * V1;

typedef @float@ voltage; /* kisebb kell */

voltage V1 = 1.0;
double c = 2.0;
voltage V2 = c * V1;


typedef  @struct vektor@  vektor;
