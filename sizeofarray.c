#include<stdio.h>
int main()
{
    int a[] = {3,4,5,6,78,87,98,76,56,34,76,789,67,88,89,23,45,78,56,67,65,45,67,78,67,98,67,67,34,67,87,67,98,34};
    printf("%d",sizeof(a)/sizeof(a[0]));
}