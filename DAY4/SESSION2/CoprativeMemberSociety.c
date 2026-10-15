#include<stdio.h>
typedef struct Address{
    char village[20];
    int pincode;
}Address;

typedef struct Member{
    int id;
    char name[20];
    float share_capital;
     Address address;
}Member;

int main(){
    int n,highest=0;
    double total=0.0;
    printf("Enter the no. of members:");
    scanf("%d",&n);
    if(n<=0 || n>200)
    {
        printf("INVALID COUNT");
        return 0;
    }
    Member m[n];
    for(int i=0;i<n;i++){
        scanf("%d %19s %f %19s %d",&m[i].id,m[i].name,&m[i].share_capital,m[i].address.village,&m[i].address.pincode);
    
        total =total+m[i].share_capital;

        if(m[i].share_capital>m[highest].share_capital){
            highest=i;
        }
    }
    printf("MEMBER LEDGER\n");
    for(int i=0;i<n;i++){
        printf("%d %s %.2f %s %d\n",m[i].id,m[i].name,m[i].share_capital,m[i].address.village,m[i].address.pincode);

    }
    printf("Total Share Capital: %.2f\n",total);
    printf("Highest Holder:%d %s %.2f %s %d\n",m[highest].id,m[highest].name,m[highest].share_capital,m[highest].address.village,m[highest].address.pincode);
     
    return 0;
}

