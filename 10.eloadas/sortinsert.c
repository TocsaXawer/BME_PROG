MINDEN i-re 0-tól N-2-ig
	iMin '$\leftarrow$' i
	MINDEN j-re i+1-től N-1-ig
		HA t[j] < t[iMin]
			iMin '$\leftarrow$' j;
	t[i] '$\leftrightarrow$' t[iMin];

for (i=0; i<N-1; ++i) {
	iMin = i;
	for (j=i+1; j<N; ++j)
		if (t[j] < t[iMin])
			iMin = j;
	xchg(t+i, t+iMin);
}

