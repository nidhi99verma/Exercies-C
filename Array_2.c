#include <stdio.h>
int main ()
{
    char s[3][10];
    int i, l;
    printf("Enter three Strings : ");
    for(i=0; i <=2; i++)
        gets(&s[i][0]);   //gets(s[i])
   
    for(i=0; i<=2; i++)
        l = strlen(s[i]);
        printf("\n%d",l);
}