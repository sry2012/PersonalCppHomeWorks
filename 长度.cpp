#include <stdio.h>
#include <string.h>
struct S {
	int i;
	char ch;
};
int main ()
{
	int d;
	d=sizeof(struct S);
	printf ("%d\n", d);
	return 0;
}