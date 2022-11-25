#include<stdio.h>
int main()
{
    int a[9]={34,56,62,68,89,9032,45};
    int i;
    //original order
    for(i=0;i<9;i++){
        printf("%d",a[i]);
    }
    printf("\n");
    //reverse order
    for(i=8;i>=0;i--){
        printf("%d",a[i]);
    }
    return 0;
}