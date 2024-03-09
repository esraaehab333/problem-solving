#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    scanf("%d", &n);
    int min = 0;
    for (int i = 1; i <= 2*n - 1; i++)
    {
        for (int j = 1; j<=2*n-1; j++)
        {
            int x = i;
            int y = j;
            if(i>n) x = 2*n-i;
            if(j>n) y = 2*n-j;
            if (x<y) min = x;
            else min = y;
            printf("%d ",n + 1 - min);
        }
        printf("\n");
    }
    return 0;
}
