#include<stdio.h>
#include<string.h>
void main()
{
    char c1[10],c2[10],c3[20],cnct;
    printf(" Enter the first string: ");
    scanf("%s",c1);

    printf(" Enter the 2nd string: ");
    scanf("%s",c2);

    printf(strcat(c1,c2));


}