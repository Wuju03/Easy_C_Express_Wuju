#include <stdio.h>
/*
배열 원소들의 총합을 구하여라
*/
int array_sum(int *A, int size){
    int i, sum = 0;
    for(i=0; i < size; i++){
        sum += *A;
        A++;
    }
    return sum;
}

int main(){
    int A[10] = {1, 2, 3, 0, 0, 0, 0, 0, 0, 0};
    int sum;
    printf("A[] = ");
    
    for(int i = 0; i < 10; i++){
        printf("%d ", A[i]);
    }

    printf("\n");

    sum = array_sum(A, 10);

    printf("월급의 합 = %d", sum);

}