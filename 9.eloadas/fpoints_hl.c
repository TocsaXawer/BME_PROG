FILE *fp;
double x, y;
...
/* olvasás, amíg sikeres (2 számot olvastunk) */
@while (fscanf(fp, "x:%lf, y:%lf", &x, &y) == 2)@
{
	/* feldolgozás */
}

