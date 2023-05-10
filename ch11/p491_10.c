#include <stdio.h>
void array_copy(int *A, int *B, int size){
    int i;
    for(i=0; i < size; i++){
        *B = *(A+i); // 현재 B의 주소에 A+i 주소에 있는 값 저장
        B += 1; // B의 주소 1증가(int형이니 4바이트)(배열 index값 1증가)
    }
}
int main(){
    int A[10] = {1, 2, 3, 0, 0, 0, 0, 0, 0, 0}, B[10];
    
    printf("A[] = ");

    for(int i = 0; i < 10; i++){
        printf("%d ", *(A+i)); // *(A+i) 대신 A[i] 써도 됨
    }

    array_copy(A, B, 10);

    printf("\nB[] = ");

    for(int i = 0; i < 10; i++){
        printf("%d ", *(B+i)); // *(B+i) 대신 B[i] 써도 됨
    }

    return 0;

}