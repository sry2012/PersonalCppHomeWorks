//输入任意一个整数，输出不小于该整数的一对孪生素数。
//孪生素数即相差2的一对素数。例如3和5 ，5和7，11和13，…，10016957和10016959等等都是孪生素数。 

#include <stdio.h>
#include <math.h>

//判n是否为素数，是返回真否则返回假
int isPrime(long int n);

void main()
{
  long int n;
  printf("请输入一个整数:");
  scanf("%ld",&n);

  while (!isPrime(n)||!isPrime(n+2)) n++; 

  printf("%ld,%ld是一对孪生素数\n",n,n+2);
}

//判n是否为素数，是返回真否则返回假
int isPrime(long int n) 
{ 
  long int k=(long int)sqrt(n);
  for (long int i=2;i<=k;i++)
    if (n%i==0) return false;
  return true;
}
