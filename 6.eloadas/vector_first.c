struct vektor { /* struktúra típusdefiníció */
	double x; double y;
};

struct vektor v_kulonbseg(struct vektor a,
                          struct vektor b) {
	struct vektor c;
	c.x = a.x - b.x;
	c.y = a.y - b.y;
	return c;
}

int main(void) {
	struct vector v1, v2, v3;
	v1.x = 1.0;  v1.y = 2.0;
	v2 = v1;
	v3 = v_kulonbseg(v1, v2);
	return 0;
}
