#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
	
    int n;
    scanf("%d", &n);
    //Complete the code to calculate the sum of the five digits on n.
    int h =5;
    int sum =0;
    while(h--){
        int r = n%10;
        n=n/10;
        sum = sum +r;
    }
    printf("%d",sum);
    return 0;
}
