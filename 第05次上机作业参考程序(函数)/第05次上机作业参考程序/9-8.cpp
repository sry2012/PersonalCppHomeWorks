#include<stdio.h>

double pow(double d,int p);

void main(void)
{
  printf("pow(0,4)=%g\n",pow(0,4));
  printf("pow(5.2,0)=%g\n",pow(5.2,0));
  printf("pow(2,2)=%g\n",pow(2,2));
  printf("pow(2,-2)=%g\n",pow(2,-2));
}

double pow(double d,int p)
{
  if (d==0) return 0;

  if (p<0)  return 1.0/pow(d,-p);
  if (p==0) return 1.0;
  if (p==1) return d;

  return d*pow(d,p-1);
}
