#include <stdio.h>
#include <string.h>
#define size 90
void reverse (char *a, int n);
int main ()
{
	char input[size];
	int n;
	printf ("�������ַ�����");
	gets (input);
	n=strlen(input);
	reverse (input,  n);
	return 0;
}
void reverse (char *a,int n)
{
	int i;
	for (i=0;i<n; i++)
	{
		printf ("%c", *(a+n-i-1));
	}
	putchar ('\n');
}
