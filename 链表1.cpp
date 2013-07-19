#include <stdio.h>
#include <malloc.h>
#include <string.h>
struct Student {
	int num;
	char name[21];
	float gread[3];
	struct Student *next;
};
struct Student * great ();
int main ()
{
	struct Student *head,*p;
	head=great();
	p=head;
    for (;p!=NULL;p=p->next)
		printf ("%3d %6s %3.1f %3.1f %3.1f\n", (*p).num,(*p).name,(*p).gread[0],(*p).gread[1],(*p).gread[2]);
	return 0;
}
struct Student * great ()
{
	struct Student *head,*tail,*p;
	int num1,size;
	char name2[21];
	float f[3];
	size=sizeof(struct Student);
	head=tail=NULL;
	printf ("请输入学号：");
	scanf ("%d", &num1);
	while (num1)
	{
		printf ("请输入学生的姓名：");
		scanf ("%s", name2);
		printf ("请输入学生3科成绩：");
		scanf ("%f%f%f", &f[0],&f[1],&f[2]);
		p=(struct Student*)malloc(size);
		p->num=num1;
		strcpy ((*p).name, name2);
		for (int i=0;i<3;i++)
			(*p).gread[i]=f[i];
		p->next=NULL;
		if (head==NULL)
			head=p;
        else tail->next=p;
		tail=p;
        printf ("请输入学号：");
	    scanf ("%d", &num1);
	}
	return head;
}