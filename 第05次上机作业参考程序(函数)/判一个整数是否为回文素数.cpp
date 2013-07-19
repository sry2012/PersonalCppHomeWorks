//��һ�������Ƿ�Ϊ��������
#include <stdio.h>
#include <math.h>

//��һ�������Ƿ�Ϊ���������Ƿ�������򷵻ؼ�
char isPlalindrome(long n);
//��һ�������Ƿ�Ϊ�������Ƿ�������򷵻ؼ�
char isPrime(long n);

void main(void) {
  puts("2��9999֮��Ļ����������£�");
  for (long n=2;n<10000;n++) {
    if (isPlalindrome(n)&&isPrime(n))
      printf("%-4ld ",n);
  }
  putchar('\n');
}

//��һ�������Ƿ�Ϊ���������Ƿ�������򷵻ؼ�
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

//��һ�������Ƿ�Ϊ�������Ƿ�������򷵻ؼ�
char isPrime(long n)  {
  if (n<2) return false;
  int i,k=(int)sqrt(n);
  for (i=2;i<=k;i++) {
    if (n%i==0) 
      return false;
  }
  return true;
}