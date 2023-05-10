#include <stdio.h>
void array_print(int *A, int size){
    int i;
    printf("A[] = { ");
    for(i = 0; i<size; i++){
        printf(" %d,", *(A + i)); // 포인터 A는 배열 a[0]의 주소, A + 1 => a[0]의 주소 + 4바이트, *(간접 참조 연산자) 사용해줘야 값에 접근가능
    }

    printf(" }\n");
}

int main(){
    int a[10] = {1, 2, 3, 4, 5, 0, 0, 0, 0, 0};
    int *pt = a;

    array_print(pt, sizeof(a) / 4); // sizeof 함수는 배열의 길이가 아닌, 해당 파라미터의 바이트를 반환함

    return 0;

}