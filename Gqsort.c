//Generic implementation ofQuick Sort
void swap(void v[], int i, int j)
{
	void *tmp = v[i]; v[i] = v[j]; v[j] = tmp;
}
/* qsort: sort v[left]..v[right] into increasing order */
void qsort(void v[], int left, int right, int (*compare)(void *, void *))
{
	int i, last;
	if (left >= right) /* do nothing if array contains */
		return; /* less than two elements */
	swap(v, left, (left + right)/2);
	last = left;
	for (i = left+1; i<= right; i++)
		if ((*compare)(v[i], v[left]) < 0)
			swap(v, ++last, i);
		swap(v, left, last);
qsort(v, left, last-1, compare);
qsort(v, last+1, right, compare);
}