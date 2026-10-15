#include<stdio.h>
int main(){
    char text[]="REVA";
    char *p=text;
    while(*p!='\0'){
        printf("%c\n",*p);
        p++;
    }
}