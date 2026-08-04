#include "def.h"
#define square(x) (x)*(x)




int main(void)
{
    /*
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
    */

    //Midterm 1
    #define ZADATAK 4
    //Prvi zadatak
    #if ZADATAK == 1
    int c;
    char array[24];
    for(int i=0;i<24;i++){
        c = fgetc(stdin);
        array[i]=c;
        
    }
    for(int i=0;i<24;i++){
        c=array[i];
        if(('0'<=c&&c<='9')||('A'<=c&&c<='Z')){
            printf("%c ",c);
        }
    }
    #elif ZADATAK == 2
    //Drugi zadatak
    int squared = 0;
    for(int i=10;i<100;i++){
        squared = i*i;
        if(i==(squared%100)){
            printf("%d is automorphic\n",i);
        }
    }

    #elif ZADATAK == 3
    
    float input;
    scanf("%f",&input);
    float min = input;
    int low =0;
    int med = 0;
    int high = 0;
    while(input!=-1.0){
        if(input<2){
            low++;
        } else if(input < 3.5){
            med++;
        } else {
            high++;
        }
        if(input<min){
            min=input;
        }
        scanf("%f",&input);
    }
    printf("Low: %d\nMedium: %d\nHigh: %d\nMinimum: %.01f\n",low,med,high,min);

    #elif ZADATAK == 4

    struct attendee{
        char name[30];
        char email[50];
        int attended;
    };
    struct attendee niz[12];
    char n[30];
    char e[50];
    int a;
    printf("For the next 12 lines fill in the data in the format [name] [email] [0 for skipped/ 1 for attended]\n");
    for(int i=0;i<12;i++){
        scanf(" %s %s %d",niz[i].name,niz[i].email,&niz[i].attended);
    }
    while (fgetc(stdin) != '\n'); 
    
    while(1){
        printf("For listing atendees send 1, for marking attendance send 2, to exit send 0\n");
        int choice;
        scanf(" %d", &choice);
        if(choice=='1'){
            for(int i=0;i<12;i++){
                if(niz[i].attended){
                    printf("%s\n",niz[i].name);
                }
            }
        } else if(choice=='2'){
            printf("Enter the name of attendee to mark them present\n");
            char input[30];
            scanf(" %s",input);
            char s = 0;
            for(int i=0;i<12;i++){
                
                if(strcmp(niz[i].name,input)==0){
                    niz[i].attended=1;
                    s=1;
                    break;
                }
            }
            if(!s){
                printf("Invalid name\n");
            }
        } else if(choice=='0'){return 0;}
        else {printf("Invalid choice\n");}
    }
    



    //Midterm 2
    #elif ZADATAK == 5








    #endif
    return 0;
}