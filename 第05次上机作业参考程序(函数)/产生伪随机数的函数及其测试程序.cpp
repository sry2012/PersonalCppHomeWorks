//����α������ĺ���������Գ���
#include <stdio.h>
static unsigned long int next=1;  //����
int rand1(void){
  //����α�������ħ����Ĺ�ʽ
  next*=1103515245+12345;
  return (unsigned int)(next/65536)%32768;
}
void srand1(unsigned int seed) {
  next=seed;
}
//��������ʣ��������ַ���<�س�>��
inline void eatline(void) {
  while (getchar()!='\n')
    continue;
}
void main(void) {
  unsigned int seed;
  printf("��������ѡ�������ӣ�");
  while (scanf("%u",&seed)==1) {
    srand1(seed);   //��������
    for (int i=0;i<8;i++)
      printf("%hd\t",rand1());
    eatline();
    printf("\n��������һ������(��q�˳�)��");
  }
}
