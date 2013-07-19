#include <stdio.h>
int main ()
{
	int i,sum;
	for (i=1,sum=0;i<=10;i++)
		sum=sum+i;
	printf ("%d", sum);
	return 0;
}