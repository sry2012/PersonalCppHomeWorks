#include <stdio.h>
int main ()
{
	FILE *fp;
	if ((fp=fopen("a.txt","a+"))==NULL)
		printf ("�޷���\n");
	char s[10];
	fscanf (fp, "%s", s);
	puts (s);
	return 0;
}