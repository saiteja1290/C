#include <stdio.h>
#include <math.h>
void main()
{
    int a[100], x, r, n, z, k, y, i, j, q, t;
    printf("Enter Number:\n");
    scanf("%d", &n);

    // To Find Number Of Digits
    // y = no of digits
    for (i = 1; i < 100; i++)
    {
        x = pow(10, i);
        if (n / x == 0)
        {
            y = i;
            break;
        }
    }
    // printf("Number of Digits:%d\n",y);
    // storing the digits in array
    for (i = y - 1; i >= 0; i--)
    {
        z = pow(10, i);
        k = n / z;
        a[y - 1 - i] = k;
        n = n - k * z;
    }

    printf("Enter Number of Rotations:\n");
    scanf("%d", &r);
    while (r>0)
    {
        t = a[0];
        a[0] = a[y - 1];

        for (i = 0; i <= y-3; i++)
        {
            a[y - i - 1] = a[y - i - 2];
        }
        a[1] = t;
        r = r - 1;
    }

    for (k = 0; k < y; k++)
    {
        printf("%d", a[k]);
    }
}