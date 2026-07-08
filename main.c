#include <stdio.h>

int factorial(int n)
{
    if(n <= 1)
    {
        return 1;
    }
    return n*factorial(n-1);
}
int main(void)
{
    int i = 10;
    int *p = &i;
    printf("The value of i is %d\n", i);
    printf("The size of p is %zu\n", sizeof(p));
    printf("And its address is %p\n", (void *)&i);
    printf("Factorial of 10 is %d\n", factorial(10));
    return 0;
}