#include <stdio.h>
int max (int n , int m)
{
    if(n>m)
    return n;
    else {
        return m;
    }
}

int main() {
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    int ans = max(a,max(b,max(c,d)));
    printf("%d", ans);
    
    return 0;
}
