#include<stdio.h>
int main()
{
    int num,n;
    int arr[] = {2000,3000,5000,500,400};
    n = sizeof(arr);
    printf("Enter the number: ");
    scanf("%d",&num);
    for(int i = 0; i<n; i++)
    {
        if(arr[i] == num){
            printf("Index = %d\n",i);
            break;
        }
        else {
            printf("Selected number is not in the series.\n");
            break;
        }

    }
    return 0;

}