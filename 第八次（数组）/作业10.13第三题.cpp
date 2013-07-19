#include <stdio.h>
#define size 9
int MAX (int *n, int m);
int main ()
{
	int max,i;
	int input[size];
	printf ("请输入9个整数：");
    for (i=0;i<size;i++)
		scanf ("%d", &input[i]);
	max=MAX (input, size);
	printf ("输入的数据的最大值为%d.\n", max);
	return 0;
}
int MAX (int * n, int m)
{
	int max,i;
	max=*n;
	for (i=0; i<m; i++)
		max=(max>*(n+i+1))?max:*(n+i+1);
	return max;
}
