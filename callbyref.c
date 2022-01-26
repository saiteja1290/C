// call by reference 
#include <stdio.h>
int swap(int *a , int *b);
void main()
{
    /* code */
    int a=10,b=20;
    printf("The values of a=%d and b=%d\n",a,b);
    printf("The adresses of a=%u and b=%u\n",&a,&b);
    swap(&a,&b);
    printf("The values of a=%d and b=%d\n",a,b);
}

int swap(int *a , int *b)
{
    /* code */
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
    return 0;
}

