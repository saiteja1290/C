#include <stdio.h>
void main()
{
    float price, units;
    printf("enter the number of units\n");
    scanf("%f", &units);
    if (units <= 100)
    {
        printf("category 1\n");
        if (units > 50)
        {
            price = price + 50 * 1.45;
            units = units - 50;
            price = price + units * 2.60;
        }
        else
        {
            price = price + units * 1.45;
        }
    }
    if (units > 100 && units <= 200)
    {
        printf("category 2\n");
        price = price + 100 * 3.30;
        units = units - 100;
        price = price + units * 4.30;
    }
    if (units > 200)
    {
        printf("category 3\n");
        price = price + 200 * 5;
        units = units - 200;
        if (units < 100)
        {
            price = price + units * 7.20;
        }
        else
        {
            price = price + 100 * 7.20;
            units = units - 100;
            if (units < 100)
            {
                price = price + units * 8.50;
            }
            else
            {
                price = price + 100 * 8.50;
                units = units - 100;
                if (units < 400)
                {
                    price = price + units * 9;
                }
                else
                {
                    price = price + 400 * 9;
                    units = units - 400;
                    price = price + units * 9.50;
                }
            }
        }
    }
    printf("the price is %f", price + 60);
}
