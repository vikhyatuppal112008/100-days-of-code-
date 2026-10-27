#include <stdio.h>
int main()
{
char str[100];
int i;
int count=0;
printf("enter the string =");
scanf("%99s",str);
for( i=0 ; str[i]!='\0' ; i++)
{ count++;
}
printf("lenght of string is = %d",count);
return 0;

}