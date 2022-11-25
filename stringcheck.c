#include<stdio.h>
#include<string.h>
int main()
{
    char str1[20] = "hello";
    char str2[20] = "ridip";
    char str3[20];
    
    strcpy(str3,str2);
    printf("%s",str3);
    strcpy(str3,str1);
    printf("%s",str3);

    return 0;
}