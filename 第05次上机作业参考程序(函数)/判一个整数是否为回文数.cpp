#include <stdio.h>

//判一个整数是否为回文数
char isPlalindrome(long n);

void main(void) {
  for (long n=-999;n<=999;n++) {
    if (isPlalindrome(n))
      printf("%-4ld ",n);
  }
  putchar('\n');
}

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