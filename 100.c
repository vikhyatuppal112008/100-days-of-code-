#include <stdio.h>
#include <string.h>
void printSubstrings(char str[])
{int i, j, k;
    int n = strlen(str);
    for(i = 0; i < n; i++)
    {
        for(j = i; j < n; j++)
        { for(k = i; k <= j; k++)
            {
                printf("%c", str[k]);
            }

            printf("\n");
        }
    }
}
int main()
{
    char str[100];

    printf("Enter a string: ");
    scanf("%s", str);
    printSubstrings(str);
    return 0;
}