#include<stdio.h>
#include<stdlib.h>
#include<time.h>
void showarray(int * array, int n)
{
	int i;
	for(i = 0; i < n; i++)
	{
		printf("array is %4d",array[i]);
	}
	return ;
}

void initarray(int * array, int n)
{
	int i;
 
    srand((int)time(0));
 
    for(i=0;i<n;i++)
    {
        array[i]=1+(int)(50.0*rand()/(RAND_MAX+1.0)); 
    }
}
