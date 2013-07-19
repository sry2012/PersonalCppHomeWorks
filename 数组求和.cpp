#include <stdio.h>
#define SIZE 10
int main ()
{
	int i,sum,input[SIZE];
	sum=0;
	for (i=0;i<SIZE;i++)
	{
		scanf ("%d", &input[i]);
		sum=sum+input[i];
	}
	printf ("%d\n",sum);
	return 0;
}