#include <stdio.h>
#include <ctype.h>

void countFile()
{   FILE *fp;
    int ch, characters = 0, words = 0, lines = 0;
    int inword = 0, last = '\n';
    fp = fopen("info.txt", "r");
    if(fp == NULL)
    {
        printf("File not found");
        return;
    }
    while((ch = fgetc(fp)) != EOF)
    {
        characters++;

        if(ch == '\n')
            lines++;

        if(isspace(ch))
            inword = 0;
        else if(inword == 0)
        {
            words++;
            inword = 1;
        }
        last = ch;
    }
    if(characters > 0 && last != '\n')
        lines++;

    printf("Characters = %d\n", characters);
    printf("Words = %d\n", words);
    printf("Lines = %d\n", lines);

    fclose(fp);
}

int main()
{
    countFile();
    return 0;
}