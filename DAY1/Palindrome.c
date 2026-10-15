#include<stdio.h>
int main(){
    int rev=0,rem=0,n;
    printf("Enter a number:");
    scanf("%d",&n);
    int temp=n;
    while(n!=0){
        rem=n%10;
        rev=rev*10+rem;
        n=n/10;


    }
    printf("Reversed no: %d\n",rev);
    if(temp==rev){
        printf("The number is a palindrome");
    }
    else{
        printf("The number is not a palindrome");
    }
    return 0;

}