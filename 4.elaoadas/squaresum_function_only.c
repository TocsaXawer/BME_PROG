@int@ @squaresum@(@int n@)
{
	int i, sum = 0;
	for (i = 1; i < n; i = i+1)
		sum = sum + i*i;
	return sum;
}
