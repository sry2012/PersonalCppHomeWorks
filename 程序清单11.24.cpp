#include <stdio.h>
#define MAX 20
int main ()
{
	char frist[MAX];
	char last[MAX];
	char formal[2*MAX+10];
	double prize;
	puts ("Enter your frist name: ");
	gets (frist);
	puts ("Enter your last name :");
	gets (last);
	puts ("Enter your prize money :");
	scanf ("%lf", &prize);
	sprintf (formal, "%s,%-19s:$%6.2lf\n", last, frist, prize);
	puts(formal);
	return 0;
}