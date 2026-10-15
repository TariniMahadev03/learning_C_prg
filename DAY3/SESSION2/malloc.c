#include<stdio.h>
#include<stdlib.h>
int main(){
    int n;
    printf("Enter the size of the array: ");
    scanf("%d",&n);
    int *p=(int *)malloc(n*sizeof(int));
    if(p==NULL){
        printf("memory allocation failed");
        return 1;
    }
    for(int i=0;i<n;i++){
        p[i]=i+1;
    }

    printf("The elements of the array are: ");
    for(int i=0;i<n;i++){
        printf("%d ",p[i]);
    }   
    free(p);
    p=NULL;
    printf("Memory freed and pointer set to NULL\n");
}