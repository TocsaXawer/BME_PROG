#include <stdio.h>

void traverse(char lab[][9+1], int x, int y)
{
	if (lab[x][y] != ' ')
		return;
	lab[x][y] = '.';        /* itt jártam */
	traverse(lab, x-1, y);
	traverse(lab, x+1, y);
	traverse(lab, x, y-1);
	traverse(lab, x, y+1);
}



int main(void)
{
	char lab[9][9+1] = {
		"+-------+",
		"|       |",
		"+-+ ++ ++",
		"|       |",
		"| + +-+ |",
		"| | |   |",
		"+-+ +-+ |",
		"|     | |",
		"+-----+-+"
	};

	int i;
	for (i = 0; i < 9; ++i)
        printf("%s\n", lab[i]);

	traverse(lab, 1, 1);

	for (i = 0; i < 9; ++i)
        printf("%s\n", lab[i]);
	return 0;
}
