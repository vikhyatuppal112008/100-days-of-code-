#include <stdio.h>
void reverse(char str[])
{ int length = 0;
 int  i;
 while (str[length] !='\0')
 {
   length++;

 }
 printf("revers =");
 
 for( i= length -1  ; i>=0 ; i--)
 { 
  printf("%c",str[i]);
 }
}

int main()
{
char str[100];
printf("enter the string = ");
scanf("%99s" ,str);
reverse(str);

return 0;

}