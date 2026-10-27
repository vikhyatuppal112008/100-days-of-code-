#include <stdio.h>
void uppercase(char str[])
{int i ;
for( i=0 ;str[i] != '\0';i++)
{ if (str[i]>='a' ||str[i] <= 'z')
 str[i]= str[i]-32;

}
printf("uppercase string = %s",str);
}


int main()
{ char str[100];
printf("enter the string = ");
scanf("%99s" ,str);
uppercase(str);
return 0;
}