#include <stdio.h>

int main() 
{
  int x, y, khtar, solisyoun;
  int (*botona[4])(int, int);

  int za2id(int ra9m1, int ra9m2);
  int na9is(int ra9m1, int ra9m2);
  int darb(int ra9m1, int ra9m2);
  int l9issma(int ra9m1, int ra9m2);  

  printf("dkhl jouj ar9am alkassoul: ");
  scanf("%d%d", &x, &y);

  botona[0] = za2id;
  botona[1] = na9is;
  botona[2] = darb;
  botona[3] = l9issma;

  printf("clicki 3la 0 bach dir za2id, 1 bach dir na9is, 2 bach dir darb, or 3 bach dir l9issma deria alkassloul raha tab3ani leqwasyoun dlgeometric fraktal: ");
  scanf("%d", &khtar);
  solisyoun = botona[khtar](x,y);
  
  printf("solution dmester joulya hya = %d \n", solisyoun);
  printf("wdik TATATATA rah m3ndnach m3aha yalah sir khrj leqwasyoun d x 3la Y wila madrtihach ghadi nwrik");

  return 0;
}
int za2id(int x, int y)
{
  return(x + y);
}
int na9is(int x, int y) 
{
  return(x - y);
}
int darb(int x, int y) 
{
  return(x * y);
}
int l9issma(int x, int y) 
{
  if (y != 0)
    return (x / y);
  else
    return 0;
}