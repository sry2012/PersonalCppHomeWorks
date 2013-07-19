#include<stdio.h>

const double X=1.8,Y=32.0,Z=273.16;

void Temperatures(double f);

int main(void)
{
  double f;
  printf("请输入一个华氏温度:");
  while(scanf("%lf",&f)==1) {
    printf("输入的华氏温度为:%.2lf\n",f);
    Temperatures(f);
    printf("请输入下一个华氏温度:");
  }
  return 0;
}

void Temperatures(double f)
{
  double c=(f-Y)/X;
  double k=c+Z;
  printf("对应的摄氏温度为:%.2lf\n",c);
  printf("对应的绝对温度为:%.2lf\n",k);
}