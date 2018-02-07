//Generic function to find minimum element in an array
int min(void v[], int size, int (*compare)(void *, void *)) //function to calculate min value in an array
{
int i;
int min = 0;
for (i = 1; i < size; i++)
	if ((*compare)(v[i], v[min]) < 0)
		min = i;
return min;
}
