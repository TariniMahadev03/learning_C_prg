#include<stdio.h>
#include<stdlib.h>
int main(){
    int n;
    printf("Enter the no. of array elemnets:");
    scanf("%d",&n);
    int *p=(int *)calloc(n,sizeof(int));
    if(p==NULL){
        printf("Memory allocation failed");
        return 1;
    }
    for(int i=0;i<n;i++){
        printf("%d",p[i]);
    }
    free(p);
    p=NULL;
    printf("\nMemory freed and pointer set to NULL\n");
}