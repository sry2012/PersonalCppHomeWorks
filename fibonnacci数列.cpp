#include <stdio.h>
#define SIZE 20
int main ()
{
	int i,a[SIZE];
	a[0]=1;
	a[1]=1;
	for (i=2;i<SIZE;i++)
		a[i]=a[i-1]+a[i-2];
	for (i=0;i<SIZE;i++)
		printf ("%d ",a[i]);
	putchar('\n');
	return 0;
}
