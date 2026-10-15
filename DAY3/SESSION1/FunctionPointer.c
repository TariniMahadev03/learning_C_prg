#include<stdio.h>
int add(int x,int y){
    return x+y;
}
int main(){
    int (*ptr)(int,int)=add;
    int result=ptr(10,20);
    printf("%d\n",result);

    int a=10;
    int b=20;
    const int *const p=&a;
    printf("%d\n",*p);
}