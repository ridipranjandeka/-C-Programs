#include<stsio.h>
void read(int a[],int n);
void display(int a[],int n);
int arr[100]; //global var
int main()
{
       int n;
       printf("Input how many elem:");
       scanf("%d",&n);
       read(arr,n);
       display(arr,n);
       //printf("array elements are:");
       display(arr, n-2);
       display(arr, n-3);
       return 0;
}
void display(int a[],int n);
{
     int i;
     for (i=0;i<n;i++)
     {
          printf("%d",arr[i]);

     }
     printf("\n");
      
}
void read(int a[],int n)
{
    int i;
    for(i=0;i<n;++i)
    {
          printf("%d",arr[i]);

    }
    printf("\n");

}   
int max int a[]