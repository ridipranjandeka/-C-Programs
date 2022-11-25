#include<stdio.h>
#include<stdlib.h>

int main()
{
    int n;
    printf("input how many element");
    scanf("%d",&n);
    arr  = (int *)malloc(n*sizeof(int));
    read(arr,n);
    display(arr,n);
    display(arr,n-2);
    display(arr,n-3);
    return 0;
}
void display(int*a,int n)
{
    ibt i;
    for(i=0;i<n;++i)
    {
        printf("%d,",*(arr+1));
    }
    printf("\n");
}
void read(int *a,int n){
    for(i=0;i<n;++i){
        scanf("%d",a+1);
    }
}