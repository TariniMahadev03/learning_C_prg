#include<stdlib.h>
#include<stdio.h>

typedef struct Ticket{
    int ticket_no;
    char vehicle[20];
    float gross;
    float tare;
}Ticket;

float netWeight(Ticket *t){
    return (*t).gross - (*t).tare;

}

void printTicket(Ticket *t){
    printf("%d %s gross %.2f tare %.2f net %.2f\n",(*t).ticket_no,(*t).vehicle,(*t).gross,(*t).tare,netWeight(t));
}

int main(){
    int highest=0,n;
    double total=0.0;

    printf("Enter the no. of tickets:");
    scanf("%d",&n);
    if(n<=0 || n>100000){
        printf("INVALID COUNT");
        return 0;
    }

    Ticket *t=malloc(n*sizeof(Ticket));

    if(t==NULL){
        printf("Memory allocation failed\n");
        return 1;
    }

    for(int i=0;i<n;i++){
        scanf("%d %19s %f %f",&t[i].ticket_no,t[i].vehicle,&t[i].gross,&t[i].tare);

        total=total+netWeight(&t[i]);

        if(i==0||netWeight(&t[i])>netWeight(&t[highest]) ){
            highest=i;
        }
    }
     printf("WEIGHBRIDGE DAY BOOK\n");

    for (int i = 0; i < n; i++) {
        printTicket(&t[i]);
    }

    printf("Tickets: %d\n", n);
    printf("Total net weight (kg): %.2f\n", total);

    printf("Heaviest net load: ticket %d %s %.2f\n",
           t[highest].ticket_no,
           t[highest].vehicle,
           netWeight(&t[highest]));

    free(t);

    return 0;
}
