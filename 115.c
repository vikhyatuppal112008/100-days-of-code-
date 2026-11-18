#include <stdio.h>
#include <string.h>

void anagram(char s[],char t[])
{ int i;
  int count[26] = {0};
 if(strlen(s) != strlen(t))
 {
   printf( " not anagram ");
 }
 
 for( i =0 ; s[i] != '\0' ; i++)
 {
  count[s[i] - 'a']++;
  count[t[i] - 'a' ]--;

 }
 for(i = 0 ; i<26 ; i++)
 {
  if(count[i] != 0  ) 
  {
   printf("not anagram"); 
  }

 }
 printf("anagram");

}
 
int main()
{
  int i;
 char s[100], t[100];
 
 printf("enter the first string = ");
 scanf("%99s", s);
 
 printf("enter the second string = ");
 scanf("%99s", t);

 anagram(s , t);
 return 0; 
}