//��������һ�������������С�ڸ�������һ������������
//�������������2��һ������������3��5 ��5��7��11��13������10016957��10016959�ȵȶ������������� 

#include <stdio.h>
#include <math.h>

//��n�Ƿ�Ϊ�������Ƿ�������򷵻ؼ�
int isPrime(long int n);

void main()
{
  long int n;
  printf("������һ������:");
  scanf("%ld",&n);

  while (!isPrime(n)||!isPrime(n+2)) n++; 

  printf("%ld,%ld��һ����������\n",n,n+2);
}

//��n�Ƿ�Ϊ�������Ƿ�������򷵻ؼ�
int isPrime(long int n) 
{ 
  long int k=(long int)sqrt(n);
  for (long int i=2;i<=k;i++)
    if (n%i==0) return false;
  return true;
}
