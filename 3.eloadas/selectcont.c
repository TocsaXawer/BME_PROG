#include <stdio.h>

int main(void)
{

int data[5] = {-1, 2, 3, -4, -7};/* deklarációk */
int selected[5];
int i, n;
n = 0;                           /* előkészítés */
for (i = 0; i < 5; i=i+1)        /* bejárás */
{
  if (data[i] >= 0)              /* vizsgálat */
    continue;
  selected[n] = data[i];         /* másolás */
  n = n+1;
}
printf("Negatívak száma: %d", n);/* válasz */

return 0;
}
