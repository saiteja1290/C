#include<stdio.h>

int main(int argc, char const *argv[])
{
    /* code */
    int i,n,c=0;
    printf("Enter Number:");
    scanf("%d",&n);
    for ( i = 1; i <= n; i++)
    {
        c = c + i*i;
        /* code */
    }
    printf("%d",c);
    
    return 0;
}
