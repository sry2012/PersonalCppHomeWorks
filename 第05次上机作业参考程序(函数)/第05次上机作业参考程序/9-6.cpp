#include<stdio.h>
#include<ctype.h>

int letter(char ch);

int main(void)
{
  char ch;
  int pos;
  while ((ch=getchar())!=EOF) {
    pos=letter(ch);
    if(pos==-1)
      printf("%c������ĸ\n",ch);
    else 
      printf("%c����ĸ,������ĸ���е�λ����%d\n",ch,pos);
  }
  return 0;
}

int letter(char ch)
{
  if(!isalpha(ch))
    return -1;
  return tolower(ch)-'a'+1;
}