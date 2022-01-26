// finding factorial using reccursion
#include <stdio.h>
int factorial(int n);
int main()

{
    int n, fact;
    printf("Enter number:\n");
    scanf("%d", &n);
    fact = factorial(n);
    printf("The factorial of %d is %d", n, fact);

    return 0;
}
int factorial(int n)
{
    if (n==1)
    return 1;
    else
    return(n*factorial(n-1));
}