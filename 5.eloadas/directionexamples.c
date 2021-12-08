enum month {
	JAN,  /*  0 */
	FEB,  /*  1 */
	MAR,  /*  2 */
	APR,  /*  3 */
	MAY,  /*  4 */
	JUNE, /*  5 */
	JULY, /*  6 */
	AUG,  /*  7 */
	SEPT, /*  8 */
	OCT,  /*  9 */
	NOV,  /* 10 */
	DEC   /* 11 */
};

enum month m=OCT; /*9*/

enum {
	RED,      /*  0 */
	BLUE = 3, /*  3 */
	GREEN,    /*  4 */
	YELLOW,   /*  5 */
	GRAY = 10 /* 10 */
} c;

c = GREEN;
printf("c: %d\n", c);