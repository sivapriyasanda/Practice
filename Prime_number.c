//prime or not
#include<stdio.h>
int main()
{
    int num,isprime=1;
    printf("Enter a number: ");
    scanf("%d",&num);
    if(num <= 1)
    {
        isprime=0;
    }
    else
    {
        for(int i=2;i<=num/2;i++)
        {
            if(num % i == 0)
            {
                isprime = 0;
                break;
            }
        }
    }

    if(isprime)
    {
        printf("%d is a Prime number.\n",num);

    }
    else
    {
        printf("%d is Not a Prime number.\n",num);
    }
}