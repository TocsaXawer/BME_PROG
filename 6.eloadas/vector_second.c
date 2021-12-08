struct vektor { /* új struktúra típus */
	double x; double y;
};
typedef  struct vektor  vektor; /* átnevezés */

vektor v_kulonbseg(vektor a, vektor b) {
	vektor c;
	c.x = a.x - b.x;
	c.y = a.y - b.y;
	return c;
}

int main(void) {
	vektor v1, v2, v3;
	v1.x = 1.0;  v1.y = 2.0;
	v2 = v1;
	v3 = v_kulonbseg(v1, v2);
	return 0;
}

typedef struct vektor { /* egyszerre is megy */
	double x; double y;
} vektor;


vektor v_kulonbseg(vektor a, vektor b) {
	vektor c;
	c.x = a.x - b.x;
	c.y = a.y - b.y;
	return c;
}

int main(void) {
	vektor v1, v2, v3;
	v1.x = 1.0;  v1.y = 2.0;
	v2 = v1;
	v3 = v_kulonbseg(v1, v2);
	return 0;
}

typedef struct { /* ekkor a címke lehagyható */
	double x; double y;
} vektor;


vektor v_kulonbseg(vektor a, vektor b) {
	vektor c;
	c.x = a.x - b.x;
	c.y = a.y - b.y;
	return c;
}

int main(void) {
	vektor v1, v2, v3;
	v1.x = 1.0;  v1.y = 2.0;
	v2 = v1;
	v3 = v_kulonbseg(v1, v2);
	return 0;
}

