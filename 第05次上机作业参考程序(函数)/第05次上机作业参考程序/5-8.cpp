#include<stdio.h>

const double X=1.8,Y=32.0,Z=273.16;

void Temperatures(double f);

int main(void)
{
  double f;
  printf("������һ�������¶�:");
  while(scanf("%lf",&f)==1) {
    printf("����Ļ����¶�Ϊ:%.2lf\n",f);
    Temperatures(f);
    printf("��������һ�������¶�:");
  }
  return 0;
}

void Temperatures(double f)
{
  double c=(f-Y)/X;
  double k=c+Z;
  printf("��Ӧ�������¶�Ϊ:%.2lf\n",c);
  printf("��Ӧ�ľ����¶�Ϊ:%.2lf\n",k);
}