#include <stdio.h>
#include <string.h>
int longestSubstring(char s[])
{ int i, j, k, count, max = 0;
    int n = strlen(s);
    int repeat;
    for(i = 0; i < n; i++)
    {
        count = 0;
        for(j = i; j < n; j++)
        {
            repeat = 0;
            for(k = i; k < j; k++)
            {
                if(s[k] == s[j])
                {
                    repeat = 1;
                    break;
                }
            }
            if(repeat == 1)
                break;
            count++;
        }
        if(count > max)
            max = count;
    }
    return max;
}
int main()
{char s[100];
    printf("Enter string: ");
    scanf("%99s", s);
    printf("Longest length = %d",
           longestSubstring(s));
    return 0;
}