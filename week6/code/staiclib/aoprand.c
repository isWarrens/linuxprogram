int sum(int * array, int n)
{
	int sum,i;
	sum = 0;
	for(i=0;i<n;i++)
	{
		sum+=array[i];
	}
	return sum;
}

int max(int * array, int n)
{
	int max,i;
	max = array[0];
	for(i=0;i<n;i++)
	{
		if(array[i]>max)
			max = array[i];
	}
	return max;
}
