#include <stdio.h>
#define SIZE 8
int main ()
{
	double input[SIZE];
	double sums[SIZE];
	double sum=0;
	int i;
	printf ("Enter 8 number:");
	for (i=0;i<SIZE;i++)
	{
		scanf ("%lf", &input[i]);
		sum=sum+input[i];
		sums[i]=sum;
	}
	for (i=0; i<SIZE;i++)
		printf ("input[%d] is %lf, sums[%d] is %lf.\n", i+1, input[i], i+1, sums[i]);
	return 0;
}