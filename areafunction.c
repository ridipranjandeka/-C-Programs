#include<stdio.h>
int areaOfRect(int length,int breadth)
{
    int area;
    area = length*breadth;
    return area;
}
 int main()
 {
    int l = 50, b = 20;
    int area = areaOfRect(l,b);
    printf("%d\n",area);
 }