typedef struct {
	double x;
	double y;
} vektor;

typedef struct {
	vektor kozeppont;
	double sugar;
} kor;


@kor k = {{3.0, 2.0}, 1.5};@
@vektor v = k.kozeppont;@
@k.kozeppont.y = -2.0;@

