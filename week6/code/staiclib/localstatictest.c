#include"staiclib.h"
#include<stdio.h>
int main(void)
{
	int n=10;
	int array[n];
	initarray(array,n);
	printf("max is %d\n", max(array,n));
	printf("sum is %d\n", sum(array,n));
	showarray(array,n);
	return 0;
}
