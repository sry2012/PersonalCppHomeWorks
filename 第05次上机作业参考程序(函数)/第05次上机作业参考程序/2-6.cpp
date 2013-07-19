#include <stdio.h>

void smile(void);

int main(void)
{
  smile();smile();smile();putchar('\n');
  smile();smile();putchar('\n');
  smile();putchar('\n');
  return 0;
}

/**************************
int main(void)
{
  int i,j;
  for(i=0;i<3;i++) {
    for(j=i;j<3;j++)
      smile();
    putchar('\n');
  }
  return 0;
}
**************************/

void smile(void)
{
  printf("smile!");
}