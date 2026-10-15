#include<stdio.h>
#include<stdlib.h>
int main(){
int *p = malloc(3 * sizeof(int));

if (p == NULL)
    return 1;

p[0] = 10;
p[1] = 20;
p[2] = 30;

int *temp = realloc(p, 5 * sizeof(int));

if (temp == NULL) {
    free(p);
    return 1;
}

p = temp;

p[3] = 40;
p[4] = 50;

for (int i = 0; i < 5; i++)
    printf("%d ", p[i]);

free(p);
}