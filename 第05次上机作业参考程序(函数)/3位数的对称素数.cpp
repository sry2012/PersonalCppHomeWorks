//����1���������3λ���ĶԳ����������磺101��727�������������ǶԳƵġ� 

#include <stdio.h>
#include <math.h>

//��n�Ƿ�Ϊ�������Ƿ�������򷵻ؼ�
int isPrime(long int n);

void main()
{
  for (int i=100;i<1000;i++)
    if (isPrime(i)&&i%10==i/100)
      printf("%d�ǶԳƵ�����\n",i);
}

//��n�Ƿ�Ϊ�������Ƿ�������򷵻ؼ�
int isPrime(long int n) 
{ 
  long int k=(long int)sqrt(n);
  for (long int i=2;i<=k;i++)
    if (n%i==0) return false;
  return true;
}


//����2���������3λ���ĶԳ����������磺101��727�������������ǶԳƵġ� 

#include <stdio.h>

//��n�Ƿ�Ϊ�������Ƿ�������򷵻ؼ�
char isPrime(long int n);

void main()
{
  for (int i=1;i<=9;i+=2)
    for (int j=0;j<=9;j++) {
      int k=101*i+10*j;
      if (isPrime(k))
        printf("%d�ǶԳƵ�����\n",k);
    }
}

//��nΪ��������������������򷵻ؼ�
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