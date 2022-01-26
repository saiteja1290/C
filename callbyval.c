// call by value
#include <stdio.h>
int swap(int a, int b);
int main()

{
    /* code */
    int a, b;
    printf("Enter a and b values:\n");
    scanf("%d %d", &a, &b);

    printf("Values before swap a=%d , b=%d", a, b);
    

    return 0;
}
int swap(int a, int b)
{
    int temp;
    temp = a;
    a = b;
    b = temp;

    printf("Values after swap a=%d , b=%d", a, b);
}