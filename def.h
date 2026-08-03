#ifndef def
#define def
#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>

int factorial(int);
int compare_car(const void*,const void*);

struct car{
    char *name;
    float price;
    int top_speed;
};
typedef struct llnode {
    int data;
    struct llnode *next;
} llnode;
void reversell(llnode **);

#endif