#include <stdio.h>
#include <stdlib.h>

void array_fill(int A[], int size);
int main(){
    int size;
    scanf("%d", &size);

    int random_num[size];
    array_fill(random_num, size);

    for(int i = 0; i < size; i++){
        printf("%d ", random_num[i]);
    }
}

void array_fill(int A[], int size){
    int i;
    for(i = 0; i < size; i++){
        A[i] = rand();
    }
}