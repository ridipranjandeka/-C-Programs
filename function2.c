#include<stdio.h>
#include<stdlib.h>
int main()
{
    int *a,n,i;
    printf("Input number of element");
    scanf("%d",&n);
    a=(int*)calloc(n*sizeof(int));
    if(a==NULL)
    { 
    printf("maller() error\n");
    return 1;
    }
    printf("Input array elements:");
    for(i=0;i<n;i++);
    {
        scanf("%d",a+i);
    }
    printf("Elements are:\n");
    for(i=0;i<n;i++)
    {
         printf("%d",*(a+i));
    }
    printf("\n");
    free(a);

}