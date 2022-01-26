
#include<stdio.h>
int main()
{
    
    int n,i,fib1=0,fib2=1,c;
    printf("Enter:");
    scanf("%d",&n);
    for ( i = 2; i < n; i++)
    {
        
        c = fib1 + fib2;
        fib1 = fib2;
        fib2 = c;

    }
    printf("%d",c);
    
    return 0;
}