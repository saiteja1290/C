#include<stdio.h>
int main()
{
    int i,count,j;
    for (i = 2; i <= 100; i++)
    {
        /* code */
        count=0;
        for ( j = 1; j <= i; j++)
        {
            if(i%j==0)
            {
                count++;
            }               
        }
        if (count==2)
        {
            printf("%d\n",i);
            /* code */
        }
        
    }    
    return 0;
}
