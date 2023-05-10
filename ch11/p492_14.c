#include <stdio.h>
/*
두 개 이상의 값을 반환받고 싶을때, 이런 방식으로 함수 짜면 가능함(main함수의 변수의 주소를 넘겨받아서, 그 주소에 값을 저장하는 방식이므로)
*/
void get_sum_diff(int x, int y, int *p_sum, int *p_diff){
    *p_sum = x + y;
    *p_diff = x - y;

    return 0;
}

int main(){
    int x = 100, y = 200;
    int sum, diff; // 합과 차 변수

    get_sum_diff(x, y, &sum, &diff);

    printf("원소들의 합 = %d\n", sum);
    printf("원소들의 차 = %d", diff);

    return 0;
}