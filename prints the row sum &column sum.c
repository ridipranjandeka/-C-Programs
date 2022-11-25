#include<stdio.h>
int main()
{
    int a[5][5] = {
        {8,6,5,4,3},
        {2,4,1,5,6},
        {2,4,5,8,9},
        {23,54,12,43,46},
        {34,54,12,13,23}
        };
    int i,j;
    int sum = 0;
    //row sum
    printf("Row total:");
    for(i=0;i<5;i++)
    {
        for(j=0;j<5;j++)
        {
            sum += a[i][j];
        }
        printf("%d",sum);
        sum = 0;
    }

    //column sum
    printf("column total:");
    for(j=0;j<5;i++)
    {
        for(i=0;i<5;i++)
        {
            sum +=a[i][j];

        }
        printf("%d",sum);
            sum=0;
    }
    return 0;    

        


}
