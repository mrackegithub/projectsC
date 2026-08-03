
#include "def.h"


int factorial(int n)
{
    if(n <= 1)
    {
        return 1;
    }
    return n*factorial(n-1);
};

int compare_car(const void* el1,const void* el2){
    const struct car* car1 = el1;
    const struct car* car2 = el2;
    if((car1->price)>(car2->price)){
        return 1;
    }
    if((car2->price)>(car1->price)){
        return -1;
    }
    return 0;

};

void reversell(llnode **head){
    llnode *h = *head;
    llnode *cur = h;
    llnode *temp = NULL;
    llnode *temp2 = NULL;
    while(cur != NULL){
        temp = cur->next;
        cur->next=temp2;
        temp2=cur;
        
        cur=temp;
    }
    *head=temp2;
};