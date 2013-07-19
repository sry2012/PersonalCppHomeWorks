#include <stdio.h>
#define size 21
#define csize 4
void getinfo (struct Student *n);
void Ave (struct Student *a);
void showinfo (struct Student *a);
struct Name {
	char frist[size];
	char last[size];
};
struct Student {
	struct Name handle;
	float grade [3];
	float ave;
};
int main ()
{
	int i;
	struct Student s[csize];
    for (i=0;i<csize; i++)
		getinfo (&s[i]);
	for (i=0;i<csize; i++)
		Ave (&s[i]);
	for (i=0;i<csize; i++)
		showinfo (&s[i]);
	return 0;
}
void getinfo (struct Student *n)
{
	int i;
	printf ("请输入学生的姓：");
	gets ((*n).handle.frist);
	printf ("请输入学生的名字：");
	gets ((*n).handle.last);
	printf ("请输入该生的3科成绩：");
	for (i=0;i<3;i++)
		scanf ("%d", (*n).grade[i]);
}
void Ave (struct Student *a)
{
	int i;
	float sum;
	for (i=0,sum=0;i<3;i++)
		sum+=(*a).grade[i];
	(*a).ave=sum/3;
}
void showinfo (struct Student *a)
{
	int i;
	printf ("%S%S%", (*a).handle.frist,(*a).handle.last);
	printf ("%4lf%4lf%4lf", (*a).grade[0],(*a).grade[1],(*a).grade[2]);
	printf ("%4lf\n", (*a).ave);
}


	