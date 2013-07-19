#include <stdio.h>
int main ()
{
	int n,value1,value2;
	n=4;
	value1=(n++);
	printf ("%d   %d\n", value1,n);
	n=n-1;
    value2=(++n);
	printf ("%d   %d\n", value2,n);
	return 0;
}
	