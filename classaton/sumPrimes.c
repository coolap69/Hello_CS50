#include<cs50.h>
#include<stdio.h>

//cant create a function inside  a function in C
bool isPrime(int);
int sumPrimes;

int main(void)

{
    int input = get_int("Enter number: ");
    // printf("I got %i\n", input);
    printf ("%i", sumPrimes(input))
    if (isPrime(input))
    {
        printf("%i is prime\n", input);
    }
    else
    {
        printf("%i is NOT prime\n", input);
    }
}

bool isPrime(int num)
{
    for(int i = 2; i < num; i++)
    {
        if(num % i == 0)
        {
            return false;
        }
    }
    return true;
}

intsumPrime(int number)
{
    int sum = 0;
    for(int i =2; i <= number; i++)
    {
        if (isPrime(i))
        {
            sum += i;
        }
    }
    return sum;
}
