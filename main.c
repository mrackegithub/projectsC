#include "def.h"
#define square(x) (x)*(x)




int main(void)
{
    int a[5] = {1, 2, 3, 4, 5};
    int *pa = a;
    printf("This %d is same as \n", a[3]);//a i pa skoro isti, a je isto sto i &a[0] adresa prvog elementa.
    printf("this %d.  \n", *(pa+3));//samo sto pa++ moze a a++ ne moze jer se ne moze menjati
    int i = 10;
    int *p = &i;
    printf("The value of i is %d\n", i);
    printf("And its address is %p\n", (void *)&i);
    printf("The size of p is %zu\n", sizeof(p));
    
    printf("Factorial of 10 is %d\n", factorial(10));

    for(int i = 0; i<5; i++){
        a[i] *= *(pa+i);
        printf("%d\n", a[i]);
    }
    int matrica[3][3] = {{1,2,3},{4,5,6},{7,8,9}};
    struct car golf = {.name="Golf MK7", .top_speed=250, .price=12000};
    printf("%s costs %.1f$ and it's top speed is %d km/h.\n",golf.name,golf.price,golf.top_speed);
    struct car cars[4] = {{.price=15000,.name="ford focus"},{.price=1000,.name="beat up yugo"},{.price=100000,.name="used lambo"},{.price=1500,.name="Golf Mk2"}};
    qsort(cars,4,sizeof(struct car),compare_car);
    for(int i = 0; i<4; i++){
        printf("Name: %s, Price:%.1f\n",cars[i].name, cars[i].price);
    }
    printf("Square of 5 is %d\n", square(5));
    int list[] = {1,2,3,4,5,6,7,8,9,10};
    int size = sizeof(list)/sizeof(list[0]);

    llnode *head = NULL;
    llnode *tail = NULL;
    for(int i = 0; i<size;i++){
        llnode *new = malloc(sizeof(llnode));
        if(new == NULL){
            printf("Failed");
            return 1;
        }
        new->data=list[i];
        new->next=NULL;
        if(head==NULL){
            head=new;
        }
        else{
            tail->next=new;
        }
        tail=new;
    }
    reversell(&head);
    for(llnode *cur = head; cur!= NULL; cur= cur->next){
        printf("%d\n",cur->data);
    }
    
   






    llnode *cur = head;
    while(cur!=NULL){
        llnode *next = cur->next;
        free(cur);
        cur=next;
    }
    
    return 0;
}