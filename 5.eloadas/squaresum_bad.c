int main(void) {
	int i, sum1, sum2, sum3;
	
	sum1 = 0;         /* 12-re */
	for (i = 1; i < 12; i = i+1)
		sum1 = sum1 + i*i;

	sum2 = 0;         /* 24-re */
	for (i = 1; i < 24; i = i+1)
		sum2 = sum2 + i*i;

	sum3 = 0;         /* 30-ra */
	for (i = 1; i < 30; i = i+1)
		sum3 = sum3 + i*i;

	printf("%d, %d, %d\n",
		sum1, sum2, sum3);
	return 0;
}
