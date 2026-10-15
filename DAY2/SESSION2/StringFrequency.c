#include<stdio.h>
int main(){
    char str[]="aabcbb";
    int hash[26]={0};
    for(int i=0;str[i]!='\0';i++){
        if(str[i]>='a' && str[i]<='z'){
            hash[str[i]-'a']++;
        }
        else if(str[i]>='A' && str[i]<='Z'){
            hash[str[i]-'A']++;
        }
    }

    printf("Character frequencies:\n");
    for(int i=0;i<26;i++){
        if(hash[i]>0){
            printf("%c or %c: %d\n", 'a'+i,'A'+i, hash[i]);
        }
    }
    return 0;
}