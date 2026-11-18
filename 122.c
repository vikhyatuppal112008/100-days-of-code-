#include <stdio.h>
void readfile()
{
    FILE *fp;

    fp = fopen("info.txt", "r");
    if(fp == NULL)
    {
        printf("File not found");
        return;
    }

    char buffer[256];
   while(fgets(buffer, sizeof(buffer),fp) != NULL)
   {
      printf("%s", buffer);
   }

    fclose(fp);

}
 
int main()
{
 readfile();
 return 0;
 
}