#include <stdio.h>
#include<stdlib.h>

int main()
{
    int n, i, r, ok=1;
    int x[100];
    printf("n=");
    scanf("%d", &n);

    for(i=0;i<n;i++)
    {
        scanf("%d", &x[i]);
    }

    r=x[1]-x[0];

    for(i=2;i<n;i++)
    {
        if(x[i]-x[i-1]!=r)
                ok=0;
    }
        if(ok==0)
            {
                printf("The sequence is not a progression");
            }
         else
           {
               printf("The sequence is a progression with the ratio of %d", r);
           }
}


