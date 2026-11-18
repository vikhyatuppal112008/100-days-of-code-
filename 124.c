#include <stdio.h>
void copyFile()
{
    FILE *fp1, *fp2;
    char source[100], destination[100];
    int ch;

    printf("Enter source filename: ");
    scanf("%99s", source);

    printf("Enter destination filename: ");
    scanf("%99s", destination);

    fp1 = fopen(source, "r");

    if(fp1 == NULL)
    {
        printf("Source file not found");
        return;
    }

    fp2 = fopen(destination, "w");

    if(fp2 == NULL)
    {
        printf("Destination file cannot be opened");
        fclose(fp1);
        return;
    }
    while((ch = fgetc(fp1)) != EOF)
    {
        fputc(ch, fp2);
    }
    fclose(fp1);
    fclose(fp2);
    printf("File copied successfully");
}
int main()
{
 copyFile();
 return 0; 
 
}