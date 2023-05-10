/*
문제 ex
연봉을 판 둔도 쓰지 않고 몇 년 동안 모아야 10억이 될까? 연봉을 입력하고, 10억을 연봉으로 나누어서 출력해보자.
소수점 2자리까지만 출력한다

상수 목록
goal 100000 (100000만원 = 10억)

변수 목록
연봉 입력받는 변수 int형으로 salary
얼마나 걸리는지 년단위 float형으로 year

구성
salary에 연봉 입력받기
year = goal / salary
그 다음에 year 출력해주기
*/

#define goal 100000
#include <stdio.h>

int main(){
    int salary;
    float year;

    printf("연봉을 입력하시오(단위: 만원) : ");
    scanf("%d", &salary);
    
    year = goal / (float)salary;

    printf("10억을 모으는데 걸리는 시간(단위: 년) : %.2f", year);

    return 0;
}