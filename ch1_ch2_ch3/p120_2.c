/*
문제 ex
미국에서는 거리를 표시하는데 마일을 사용
마일을 미터로 환산하는 프로그램을 만들어보자
사용자로부터 마일단위로 거리를 입력 받아서 변수에 저장한다
이 변수에 1609를 곱하면 미터로 변환 됨
미터로 변환된 값을 화면에 출력
실수값을 사용해라

변수 목록
float mile (마일 입력 받을 변수)
float meter (미터로 변환한 값을 저장할 변수)

과정
마일을 mile 변수에 입력받기
meter = 1609 * mile
meter 변수 출력하기
*/
#include <stdio.h>
int main(){
    float mile, meter;

    printf("마일을 입력하시오 : ");
    scanf("%f", &mile);

    meter = 1609 * mile;

    printf("%.1f 마일은 %.2f미터입니다.", mile, meter);

    return 0;
}