#include <stdio.h>
#define size 9
int MAX (double *n, int m);
int main ()
{
	double input[size];
	int i;
	double max;
	printf ("请输入9个整数：");
	for (i=0;i<size;i++)
		scanf ("%lf", &input[i]);
	i=MAX (input, size);
	printf ("输入的数据最大的为%lf.\n", input[i]);
	
	return 0;
}
int MAX (double *n, int m)
{
	double max;
	int i;
	max=*n;
	for (i=0;i<m;i++)
		max=(max>*(n+i+1))?max:*(n+i+1);
	for (i=0; i<m; i++)
		if (max==*(n+i))
			break;
	return i;
}

