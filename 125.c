
#include <stdio.h>

void appendFile();

int main()
{
    appendFile();
    return 0;
}

void appendFile()
{
    FILE *fp;
    char str[100];

    fp = fopen("data.txt", "a");

    if(fp == NULL)
    {
        printf("File cannot be opened");
        return;
    }

    printf("Enter text: ");
    fgets(str, 100, stdin);

    fprintf(fp, "\n%s", str);

    fclose(fp);

    printf("Text appended successfully");
}