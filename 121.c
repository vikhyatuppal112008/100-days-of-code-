#include <stdio.h>
void writefile()
{
  FILE *fp;
  char name[50];
  int age;
  
 fp = fopen("info.txt", "w");
 
 if(fp == NULL)
 { 
  printf("file cannot be opened");
  return;
 }
 
 printf("enter name : ");
 scanf("%49s",&name);
 
 printf("enter age : ");
 scanf("%49s", &age); 
 
 fprintf( fp , "name : %s\nage:%d", name,age);
 fclose(fp);
 
 printf("data saved successfully");
}
 
int main()
{
  writefile();
  return 0;
 
}