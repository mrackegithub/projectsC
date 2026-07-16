#include <stdio.h>

int factorial(int n)
{
    if(n <= 1)
    {
        return 1;
    }
    return n*factorial(n-1);
}
struct car{
    char *name;
    float price;
    int top_speed;
};

int main(void)
{
    int list1[5] = {1, 2, 3, 4, 5};
    int i = 10;
    int *p = &i;
    printf("The value of i is %d\n", i);
    printf("The size of p is %zu\n", sizeof(p));
    printf("And its address is %p\n", (void *)&i);
    printf("Factorial of 10 is %d\n", factorial(10));
    for(int i = 0; i<5; i++){
        list1[i] *= list1[i];
        printf("%d\n", list1[i]);
    }
    int matrica[3][3] = {{1,2,3},{4,5,6},{7,8,9}};
    struct car golf = {.name="Golf MK7", .top_speed=250, .price=12000};
    printf("%s costs %.1f$ and it's top speed is %d km/h.",golf.name,golf.price,golf.top_speed);
    

    return 0;
}