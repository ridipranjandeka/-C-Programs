#include <stdio.h>
#include <string.h>
int main()
{
  	char Str[100], revStr[100];
  	int i, j, len;
 
  	printf("Enter any element:");
  	gets(Str);
  	
  	j = 0;
  	len = strlen(Str);
 
  	for (i = len - 1; i >= 0; i--)
  	{
  		revStr[j++] = Str[i];
 	}
  	revStr[i] = '\0';
 
  	printf("reverse is: %s", revStr);
  	
  	return 0;
}
