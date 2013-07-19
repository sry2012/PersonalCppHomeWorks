#include <stdio.h>
#define Size 26
int main ()
{
	char ch[Size];
	char c='a';
	for (int i=0;i<Size; i++,c++)
	{
		ch[i]=c;
	}
	for (i=0;i<Size;i++)
		putchar(ch[i]);
	putchar ('\n');
	return 0;
}