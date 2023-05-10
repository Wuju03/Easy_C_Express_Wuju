/*
문제 하나의 실수 입력받아서, 소수점 표기방법과 지수 표기 방법 사용하여 출력
*/
#include <stdio.h>
int main(){
    float a;
    
    printf("실수를 입력하시오 : ");

    scanf("%f", &a);

    printf("실수형식으로는 %f입니다.\n", a);
    printf("지수형식으로는 %e입니다.", a);

    return 0;
}