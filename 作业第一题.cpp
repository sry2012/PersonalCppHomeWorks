#include <stdio.h>
#define SIZE 26
int main ()
{
	char lets[SIZE];
	int i;
	char ch='a';
	for (i=0;i<SIZE;i++,ch++)
		lets[i]=ch;
	for (i=0;i<SIZE;i++)
		printf ("%c", lets[i]);
	putchar('\n');
	return 0;
}
     