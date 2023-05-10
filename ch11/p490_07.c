#include <stdio.h>
int main(){
    int A[10];
    int *pt = A; // a[0]의 주소를 정수형 포인터 pt에 저장
    
    for(int i = 0; i < 10; i++){ // 배열 index값과, 저장된 값이 같게 지정해줌
        A[i] = i;
    }

    printf("A[] = ");

    for(int i = 0; i < 10; i++){
        printf("%d ", *(pt+i));
    }

    printf("\nA[] = ");

    for(int i = 0; i < 10; i++){
        printf("%d ", *(pt+9-i));
    }

    return 0;


}