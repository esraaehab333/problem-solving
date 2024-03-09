#include <stdio.h>
int main() {
    int a, b;
    scanf("%d %d", &a, &b);
    int h =a+b;
    printf("%d",h);
    int j = a-b;
    if(j<0)
    j=j*-1;
    printf("\n%d",j);
    return 0;
}
