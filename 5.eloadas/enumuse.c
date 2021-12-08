enum {WIDTH = 5, HEIGHT = 4};

for (i = 0; i < HEIGHT; ++i)
{
  for (j = 0; j < WIDTH; ++j)
    if (i==0 || i==HEIGHT-1 || j==0 || j==WIDTH-1)
      printf("#");
    else
      printf(" ");
  printf("\n");
}
