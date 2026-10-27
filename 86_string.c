#include <stdio.h>
#include <string.h>

int main()
{
    char str[100];
    int i, flag = 0;
    int n;
    printf("Enter a string: ");
    scanf("%99s", str);
    n = strlen(str);
    for(i = 0; i < n / 2; i++)
    {if(str[i] != str[n - i - 1])
        { flag = 1;
            break;
        }
    }
    if(flag == 0)
        printf("Palindrome");
    else
        printf("Not Palindrome");
    return 0;
}