/* névtelen enum egész konstansok nevesítésére */
enum {
	WIDTH = 10,            /* szélesség */
	HEIGHT = 8,            /* magasság */
	};
	
/* mezőtípus */
enum field {EMPTY, WALL, FOOD};
typedef enum field field_t; /* egyszerűsítés */
	
/* globális labirintus 1D tömbként tárolva */
field_t maze[WIDTH*HEIGHT];

void clear_maze(void)
{	
	int a;
	for (a = 0; a < WIDTH*HEIGHT; ++a)
		maze[a] = EMPTY;
}
