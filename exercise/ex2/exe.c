#include <stdio.h>
int IsPrime(int num)
{
  int i=2;
  for(;i<=num/2;i++)
    if(0==num%i)
      return 0;
  return 1;
}
void main()
{
  int num;
  printf("This is all prime numbers from 1 to 100: ");
  for(num=2;num<=100;num++)
    if(IsPrime(num))
      printf("%d  ",num);
  printf("\n");
}
