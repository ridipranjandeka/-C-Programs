#include<stdio.h>
int sum(int a,int b);
int main()
{
   int a,b;
   printf("Enter the number:");
   scanf("%d",&a);
   printf("enter 2nd numbers:");
   scanf("%d",&b);
   printf("sum is:%d",sum(a,b));
   return 0;
}
int sum(int a,int b)
{
   int c;
   c=a+b;
   return c;
}
