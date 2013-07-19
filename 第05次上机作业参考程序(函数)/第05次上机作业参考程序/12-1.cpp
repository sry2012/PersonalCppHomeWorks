#include <stdio.h>

int critic(void);

int main(void)
{
   int units;
   printf("How many pounds to a firkin of butter?\n");
   scanf("%d", &units);
   while ( units != 56)
       units=critic();
   printf("You must have looked it up!\n");
   return 0;
}

int critic(void)
{
   int u;
   printf("No luck, chummy. Try again.\n");
   scanf("%d", &u);
   return u;
}

/***********************************************************
#include <stdio.h>

void critic(int * u);

int main(void)
{
  int units;
  printf("How many pounds to a firkin of butter?\n");
  scanf("%d", &units);
  while ( units != 56)
    critic(&units);
  printf("You must have looked it up!\n");
  return 0;
}

void critic(int * u)
{
  printf("No luck, chummy. Try again.\n");
  scanf("%d", u);
}
***********************************************************/