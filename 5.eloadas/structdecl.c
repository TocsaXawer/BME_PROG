/* egy dátumot tároló struktúra típus */
struct @datum@ @{@
	int ev;
	int ho;
	int nap;
} @d1, d2@; /* két változó példány */

@struct datum@ @d1, d2@;
@d1@.@ev@ = 2012;
d2.ev = d1.ev;
scanf("%d", &d2.ho);
