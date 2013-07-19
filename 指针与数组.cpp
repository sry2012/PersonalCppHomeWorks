#include <stdio.h>
void input (int *a,int b);
int main ()
{
	int a[10];
	input (a,10);
    for (int i=0;i<10;i++)
		printf ("%2d", a[i]);
	putchar ('\n');
	return 0;
}
void input (int *a,int b)
{
	int i;
	for (i=0;i<b;i++)
		scanf ("%d",&a[i]);
}