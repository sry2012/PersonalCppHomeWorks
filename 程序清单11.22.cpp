#include <stdio.h>
#include <string.h>
#define WORDS "beast"
#define size 40
int main ()
{
	char *orig =WORDS;
	char copy[size]="Be the best that you can be";
	char *ps;
	puts (orig);
	puts (copy);
	ps=strcpy (copy+7, orig);
	puts (copy);
	puts (ps);
	return 0;
}