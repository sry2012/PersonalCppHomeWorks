#include <stdio.h>
#define size 21
#define size2 3
#define csize 4 //���ó���
void getinfo (struct Student *n);//����Ҫ���õĺ���
void showinfo (struct Student *a);//����Ҫ���õĺ���
struct Name {
	char frist[size];
	char last[size];
};//���������ṹ
struct Student {
	struct Name handle;
	float grade[size2];
	float ave;
};//����ѧ���Ľṹ
int main ()
{
	int i,n;
	float all_ave[size2],sum;
	struct Student s[csize];
    for (i=0;i<csize; i++)
		getinfo (&s[i]);//����ѧ������Ϣ
	for (i=0;i<size2;i++)//���������Ŀ��ƽ����
	{
		for (n=0,sum=0;n<csize;n++)
			sum+=s[n].grade[i];
		all_ave[i]=sum/csize;
	}
	printf ("����      ��Ŀ1      ��Ŀ2     ��Ŀ3    ƽ����\n");//��ӡ���
	for (i=0;i<csize; i++)
		showinfo (&s[i]);//�����ѧ������Ϣ
	for (i=0;i<size2;i++)
		printf ("��Ŀ%d��ƽ������%f\n", i+1,all_ave[i]);//���������Ŀ��ƽ����
	return 0;
}
void getinfo (struct Student *n)//����������Ϣ�ĺ���
{
	int i;
	printf ("������ѧ�����գ�");
	gets ((*n).handle.frist);
	printf ("������ѧ�������֣�");
	gets ((*n).handle.last);
	printf ("�����������%d�Ƴɼ���", size2);
	for (i=0;i<size2;i++)
		scanf ("%f", &(*n).grade[i]);//����ѧ���ķ���
	while (getchar()!='\n')
		continue;
	float sum;
	for (i=0,sum=0;i<size2;i++)//����ѧ����ƽ����
		sum+=(*n).grade[i];
	(*n).ave=sum/size2;
}
void showinfo (struct Student *a)//���������Ϣ�ĺ���
{
	int i;
	printf ("%s%s   %", (*a).handle.frist,(*a).handle.last);
	printf ("%9.1f%9.1f%9.1f", (*a).grade[0],(*a).grade[1],(*a).grade[2]);
	printf ("%9.1f\n", (*a).ave);
}