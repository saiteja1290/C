#include<stdio.h>
#include<string.h>
void main()
{
    char name[20];
    int lenght;
    printf("ENter the name\n");
    scanf("%[^\n]s",name);
    lenght = strlen(name);
    printf("Lenght is %d",lenght);
    
}