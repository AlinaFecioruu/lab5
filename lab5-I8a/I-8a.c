#include <stdio.h>
#include <string.h>

int main()
{
    char s[200];
    int k = 0, i;
    int ok = 0;
    printf("");
    gets(s);

    for (i=0; i<strlen(s); i++)
    {
        if (s[i] == ' ')
            ok = 0;

        if (ok == 0)
        {
            k++;
            ok = 1;}



    }
    printf("Number of string are %d", k);
}
