#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{

char ch[100] ;
char str[100];
char sen[100];
scanf(" %[^\n]s",ch);
scanf(" %[^\n]s",str);
scanf(" %[^\n]s",&sen);
printf("%s\n%s\n%s", ch, str, sen);
    return 0;
}