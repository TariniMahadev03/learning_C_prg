#include<stdio.h>
int main(){
    int n=10;
    int *ptr=&n;
    int *ptr2=NULL;
    printf("%d\n",n);
    printf("%p\n",(void *)&n);
    printf("%p\n",(void *)ptr);
    printf("%p\n",(void *)&ptr);
    printf("%d\n",*ptr);
    printf("%d\n",ptr2);
    printf("%p\n",(void *)ptr2);
    printf("%p\n",(void *)&ptr2);
    *ptr=*ptr+10;
    printf("%d\n",n);
    printf("%d\n",*ptr);

    char ch='A';
    char *p=&ch;
    *p='B';
    printf("%c\n",ch);
}