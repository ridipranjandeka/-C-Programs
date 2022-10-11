#include<stdio.h>
int main()
{
  int n;
  printf("\n enter any number: ");
  scanf("%d",&n);
  if(n % 2 == 0)
      printf("the number is odd\n");
  else 
      printf("the number is even\n");
  return 0;

}
