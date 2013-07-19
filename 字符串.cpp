#include <stdio.h>
int main ()
{
	int a[5]={1,2,3,4,5};
	printf ("%d, %d\n",*(a+2),a[2]);
	return 0;
}

