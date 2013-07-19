//方法1：输出所有3位数的对称素数。例如：101、727都是素数并且是对称的。 

#include <stdio.h>
#include <math.h>

//判n是否为素数，是返回真否则返回假
int isPrime(long int n);

void main()
{
  for (int i=100;i<1000;i++)
    if (isPrime(i)&&i%10==i/100)
      printf("%d是对称的素数\n",i);
}

//判n是否为素数，是返回真否则返回假
int isPrime(long int n) 
{ 
  long int k=(long int)sqrt(n);
  for (long int i=2;i<=k;i++)
    if (n%i==0) return false;
  return true;
}


//方法2：输出所有3位数的对称素数。例如：101、727都是素数并且是对称的。 

#include <stdio.h>

//判n是否为素数，是返回真否则返回假
char isPrime(long int n);

void main()
{
  for (int i=1;i<=9;i+=2)
    for (int j=0;j<=9;j++) {
      int k=101*i+10*j;
      if (isPrime(k))
        printf("%d是对称的素数\n",k);
    }
}

//判n为素数，是素数返回真否则返回假
char isPrime(long n)
{
  if (n<2)    return false;
  if (n==2)   return true;
  if (n%2==0) return false;
  
  for (long i=3;i*i<=n;i+=2) {
    if (n%i==0) return false;
  }
  return true;
}