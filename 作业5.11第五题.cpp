#include <stdio.h>
#define size 20
int main ()
{
	int input[size],sum=0;
	printf ("请输入20个数\n");
    for (int i=0;i<size;i++)
	{
		printf ("请输入第%d个数：", i+1);
		scanf ("%d", &input[i]);
		sum=input[i]+sum;
	}
	printf ("输入的20个数的和为%d。\n", sum);
	return 0;
} 
		
