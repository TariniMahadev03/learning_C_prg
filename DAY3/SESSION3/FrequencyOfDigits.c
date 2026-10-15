#include<stdio.h>
#include<stdlib.h>
int main(){
    int n,digit=0;
    printf("Enter the number:");
    scanf("%d",&n);

    int *freq=(int *)malloc(10*sizeof(int));
    if(freq==NULL){
        printf("memory allocation failed");
        return 1;

    }

    for(int i=0;i<10;i++){
        freq[i]=0;
    }
    if(n==0){
        freq[0]++;
    }
    while(n>0){
        digit=n%10;
        freq[digit]++;
        n=n/10;
    }
    for(int i=0;i<10;i++){
        if(freq[i]>0){
            printf("Frequency of %d is %d\n",i,freq[i]);
        }
    }

    free(freq);
    return 0;
}