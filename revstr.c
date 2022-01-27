// to reverse string
#include <stdio.h>
#include <string.h>
int main()
{
    int i,lenght,temp;
    char name[50]; // size of char string
    printf(" Enter the string: ");
    scanf("%[^\n]s",name);

    printf(" \n before :%s \n",name);
    lenght = strlen(name); 
    for (i = 0; i < lenght/2; i++)
    {
        
        temp = name[i];
        name[i] = name[lenght - i-1];
        name[lenght - i-1] = temp;
    }
    printf(" After :%s", name);
}