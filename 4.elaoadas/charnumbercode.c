char c;
int sum = 0;
do
{
  scanf("%c", &c);             /* beolvasás */
  if (c >= '0' && c <= '9')    /* ha számjegy */
    sum = sum + (@c-'0'@);       /* összegzés */
}
while (c != '\n');             /* leállási feltétel */
printf("Az összeg: %d\n", sum);
