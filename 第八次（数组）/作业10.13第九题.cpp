#include <stdio.h>
#define size 4
void ADD (int *a, int *b, int *c,int n);
int main ()
{
	int input[size], input2[size],output[size];
	int i;
	printf ("�������һ�����ݣ�");
	for (i=0; i<size; i++)
		scanf ("%d", &input[i]);
	printf ("������ڶ������ݣ�");
	for (i=0; i<size; i++)
		scanf ("%d", &input[i]);
	ADD (input, input2, output, size);
	return 0;
}
void ADD (int *a, int *b, int *c,int n)
{
	int i;
	for (i=0; i<n;i++)
	{
		*(c+i)=*(a+i)+*(b+i);
		printf ("%d", *(c+i));
	}
	
	putchar ('\n');
}




