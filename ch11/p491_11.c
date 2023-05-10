#include <stdio.h>

/*
C배열에 A배열의 값과 B배열 값의 합을 저장
*/
void array_add(int *A, int *B, int *C, int size){
    int i;
    for(i=0; i < size; i++){
        *C = *A + *B;
        
        A++; // A 주소 1증가(4바이트)
        B++; // B 주소 1증가
        C++; // C 주소 1증가
    }
}

int main(){
    int A[10] = {1, 2, 3, 0, 0, 0, 0, 0, 0, 0}, B[10] = {4, 5, 6, 0, 0, 0, 0, 0, 0, 0};
    int C[10];

    array_add(A, B, C, 10);

    for(int i = 0; i < 10; i++){
        printf("%d ", *(A+i));
    }

    printf("\n");

    for(int i = 0; i < 10; i++){
        printf("%d ", *(B+i));
    }

    printf("\n");

    for(int i = 0; i < 10; i++){
        printf("%d ", *(C+i));
    }

    return 0;
}