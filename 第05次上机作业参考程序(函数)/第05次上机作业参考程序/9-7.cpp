#include <stdio.h>

double power(double a, int b);

int main(void)
{
  double x, xpow;
  int n;
  printf("Enter a number and the integer power");
  printf(" to which\nthe number will be raised. Enter q");
  printf(" to quit.\n");
  while (scanf("%lf%d", &x, &n) == 2) {
    xpow = power(x,n);
    printf("%.3g to the power %d is %.5g\n", x, n, xpow);
    printf("Enter next pair of numbers or q to quit.\n");
  }
  printf("Hope you enjoyed this power trip -- bye!\n");
  return 0;
}

double power(double a, int b)
{
  double pow = 1;
  int i;
  
  if (b == 0) {
    if (a == 0) printf("0 to the 0 undefined; using 1 as the value\n");
    pow = 1.0;
  }
  else if (a == 0)
    pow = 0.0;
  else if (b > 0)
    for(i = 1; i <= b; i++)
      pow *= a;
    else    // b<0
      pow = 1.0 / power(a, -b);
    return pow;
}

/*****************************************
//另一种简化的解法
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
  if (p==0) return 1;
  if (d==0) return 0;

  double ret=1;
  int t=p>0?p:-p;
  for(int i=0;i<t;i++)
    ret*=d;
  
  if(p>0)
    return ret;
  else
    return 1/ret;
}
*****************************************/