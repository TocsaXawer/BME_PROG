válasz '$\leftarrow$' IGAZ
Minden i-re 0-tól n-1-ig
	HA data[i] <= 10
		válasz '$\leftarrow$' HAMIS
KI: válasz

int answer = 1;
for (i=0; i<n; i=i+1)
	if (data[i] <= 10)
		answer = 0;
printf("%d", answer);

válasz '$\leftarrow$' IGAZ
i '$\leftarrow$' 0
AMÍG i < n ÉS válasz IGAZ
	HA data[i] <= 10
		válasz '$\leftarrow$' HAMIS
	i '$\leftarrow$' i+1
KI: válasz

int answer = 1, i = 0;
while (i<n && answer==1)
{
	if (data[i] <= 10)
		answer = 0;
	i = i+1;
}
printf("%d", answer);

for (i=0; i<n; i=i+1)
{
	if (data[i] <= 10)
		break;
}
if (i == n) printf("Igaz."); /* végigértünk? */
else printf("Nem igaz.");

