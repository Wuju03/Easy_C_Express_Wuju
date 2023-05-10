#include <stdio.h>
#include <math.h>
double* get_max(double* A, int size){ // 배열 A의 실수값 중 최대값이 저장된 요소를 찾아서, 요소의 주소를 반환
    
    double *max = A; // 최댓값을 임시로 저장해둘 포인터 변수, 초기값을 A[0] 주소로 초기화

    for(int i = 0; i < size; i++){
        if(*(A+i) > *max){
            max = A+i;
        }
    }
    
    return max;
}
int main(){ 
    double array[4] = {1.23, 3.14, 9.16, 100.90};
    double *pt = array; // array[0]의 주소 저장
    double *max_pt = NULL; // 포인터 선언시 마땅히 넣을 값이 없다면, NULL을 초기값으로 넣어주는것이 나음

    max_pt = get_max(pt, sizeof(array) / 8); // double형은 8바이트

    printf("최댓값은 : %.2lf입니다.", *max_pt);

    return 0;
}