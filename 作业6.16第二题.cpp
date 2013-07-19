#include <stdio.h>
#define ROW 5
int main ()
{
	for (int i=0;i<ROW;i++)
	{
		for (int n=0;n<i+1;n++)
			putchar('$');
		putchar ('\n');
	}
	return 0;
}
