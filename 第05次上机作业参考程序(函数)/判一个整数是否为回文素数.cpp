//判一个整数是否为回文素数
#include <stdio.h>
#include <math.h>

//判一个整数是否为回文数，是返回真否则返回假
char isPlalindrome(long n);
//判一个整数是否为素数，是返回真否则返回假
char isPrime(long n);

void main(void) {
  puts("2～9999之间的回文素数如下：");
  for (long n=2;n<10000;n++) {
    if (isPlalindrome(n)&&isPrime(n))
      printf("%-4ld ",n);
  }
  putchar('\n');
}

//判一个整数是否为回文数，是返回真否则返回假
char isPlalindrome(long n) {
  long m=0;
  long s=(n>=0?n:-n);
  n=s;
  while (s) {
    m=m*10+s%10;
    s/=10;
  }
  return (m==n);
}

//判一个整数是否为素数，是返回真否则返回假
char isPrime(long n)  {
  if (n<2) return false;
  int i,k=(int)sqrt(n);
  for (i=2;i<=k;i++) {
    if (n%i==0) 
      return false;
  }
  return true;
}