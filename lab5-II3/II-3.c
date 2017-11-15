#include <stdio.h>

int main()
{
    int k,i,j;
    printf("k=");
    scanf("%d", &k);

    for(i=1;i<=k;i++)
        for(j=1;j<=i;j++)
            printf("%d, ", j);

    return 0;
}
