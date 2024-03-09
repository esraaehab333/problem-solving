#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
//Complete the following function.



int main()
{
    int n, k;
    int maxand =0;
    int maxor =0;
    int maxxor=0;
    scanf("%d %d", &n, &k);
    for(int i =1; i<=n; i++)
    {
        for(int j=i+1; j<=n; j++)
        {
            if((i&j)>=maxand && (i&j)<k)
                maxand = (i&j);
            if((i|j)>=maxor && (i|j)<k)
                maxor = (i|j);
            if((i^j)>=maxxor && (i^j)<k)
                maxxor = (i^j);
        }
    }
    printf("%d\n%d\n%d\n",maxand, maxor,maxxor);
    return 0;
}
