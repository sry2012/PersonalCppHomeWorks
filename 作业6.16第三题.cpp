#include <stdio.h>
#define ROW 6
int main ()
{
	char ch;
	int i,n;
	for (i=0;i<ROW;i++)
	{
		for (ch='F',n=0;n<i+1;n++,ch--)
			putchar (ch);
		putchar ('\n');
	}
	return 0;
}