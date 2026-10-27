#include<stdio.h>
void countvc(char str[])
{   int i , vowel =0,consonant = 0;
  for( i = 0 ; str[i] != 0 ; i++)
{
char ch = str[i];
if( ch=='a' ||ch =='e' || ch=='o' || ch=='i' ||ch== 'u' && ch=='A' ||ch=='E'||ch=='I' || ch=='O' ||  ch=='U'  )
{ vowel++ ;}
else if( ch>='a' || ch<= 'z' && ch>='A' || ch<= 'Z')
{ consonant++; }
}
printf("vowls = %d \n",vowel);
printf("consonants = %d \n" , consonant);}

int main()
{

char str[100];

printf("entyer the string = ");
scanf("%99s",str);
 
countvc(str) ;
return 0;


}