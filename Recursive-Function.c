#include <stdio.h>
int factorial(int n)
{
    if(n==0||n==1)
    {
        return 1;
    }
    else
    {
        return n * factorial(n - 1);
    }
}
int main()
{
    int result = factorial(5);
    printf("Factorial of 5 is: %d\n", result);
    return 0;
}