#include<stdio.h>
int main(){
    int arr[2][3]={{10,20,30},{40,50,60}};
    int (*p)[3]=arr;
    printf("%d\n",p[1][2]);
    printf("%d\n", *(*(p + 0) + 0)); 
    printf("%d\n", *(*(p + 0) + 1));  
    printf("%d\n", *(*(p + 0) + 2));  
    printf("%d\n", *(*(p + 1) + 0));  
    printf("%d\n", *(*(p + 1) + 1));  
    printf("%d\n", *(*(p + 1) + 2));  

    printf("using array\n");
    printf("%d\n", *(*(arr + 0) + 0)); 
    printf("%d\n", *(*(arr+ 0) + 1));  
    printf("%d\n", *(*(arr + 0) + 2));  
    printf("%d\n", *(*(arr + 1) + 0));  
    printf("%d\n", *(*(arr + 1) + 1));  
    printf("%d\n", *(*(arr + 1) + 2));  

    
}