#include <stdio.h>
int main ()
{
	char s[80];
	int i=0;
	while ((s[i]=getchar())!='\n')
		i++;
	s[i]='\0';
	for (i=0;s[i]!='\0';i++)
		putchar (s[i]);
	putchar ('\n');
	return 0;
}
	