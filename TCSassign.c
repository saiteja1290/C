#include <stdio.h>
#include <math.h>
int main()
{
    int n, count, i, fib1 = 0, fib2 = 1, c, req, d = 0, e, num = 2, j;
    printf("Enter nth term:\n");
    scanf("%d", &n);
    if (n % 2 == 0)
    /*print n/2 th prime number */
    {
        while (d != n/2)
        {
            int count = 0;
            for (j = 2; j <= sqrt(num); j++)
            {
                if (num % j == 0)
                {
                    count++;
                    break;
                }
            }
            if (count == 0)
            {
                d++;
                req = num;
            }
            num = num + 1;
        }
        printf("%d", req);
    }
    else if (n == 0)
    {
        printf("start from 1");
    }

    else
    {
        /* print (n/2 + 1)th fib series*/
        for (i = 1; i < ((n / 2) + 1); i++)
        {
            c = fib1 + fib2;
            fib1 = fib2;
            fib2 = c;
        }
        printf("%d", c);
    }

    return 0;
}
