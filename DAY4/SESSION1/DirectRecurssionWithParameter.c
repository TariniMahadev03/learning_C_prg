#include<stdio.h>
void print(int n){
    //base case
    if(n>5){
        return;
    }
     print(n+1);//recursive case
    printf("%d\n",n);

   
}
int main(){
    print(1);

}
