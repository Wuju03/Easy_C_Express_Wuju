#include <stdio.h>
void merge(int *A, int *B, int *C, int size){
    int a = 0, b = 0; // 현재 비교중인 a배열과 b배열의 index값

    for(int i = 0; i < size * 2; i++){ // A배열과 B배열 모두의 값을 확인해야하기에 size*2번 반복해야함
        if(a == size){ // A배열 값을 전부 C 배열에 넣었다면
            for(int p = b; p < size; p++){
                *C = *B;
                C++;
                B++;
                break;
            }
        } else if(b == size){ // B배열 값을 전부 C 배열에 넣었다면
            for(int p = a; p < size; p++){
                *C = *A;
                C++;
                A++;
                break;
            }

        } else { // 두 배열 모두 값이 남아있는 상태라면
            if(*A > *B){ // A주소에 있는 값이 B주소에 있는 값보다 크다면
                *C = *B;
                B++;
                b++; // B주소에 있는 값을 C에 저장하고 각자의 주소를 1 증가시켰으니, index값도 1 증가 되어야함
                // C++; -> 중복되니 34줄에서 한 번에 처리
            } else {
                *C = *A;
                A++;
                a++; // 바로 위 주석의 설명 참조
                // C++; -> 중복되니 34줄에서 한 번에 처리
            }

            C++;
        }
    }
}

int main(){
    
    int A[4] = {2, 5, 7, 8};
    int B[4] = {1, 3, 4, 6};
    int C[8];

    merge(A, B, C, 4); // 4를 (sizeof(A) / 4) 혹은 (sizeof(B) / 4)로 대체해도 됨

    for(int i = 0; i < 4; i++){
        printf("%d ", A[i]);
    }

    printf("\n");
    
    for(int i = 0; i < 4; i++){
        printf("%d ", B[i]);
    }
    
    printf("\n");
    
    for(int i = 0; i < 8; i++){
        printf("%d ", C[i]);
    }

    return 0;
}