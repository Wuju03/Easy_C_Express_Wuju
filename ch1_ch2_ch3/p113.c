#include <stdio.h>

/*
원의 반지름 입력 받고, 면적을 구한 다음 출력

ex
반지름을 입력하시오 : x.x
원의 면적 : x.xxxxxx

반지름 입력받을 변수 r
면적 저장할 변수 area
pi 상수 선언

*/
#define pi 3.14

int main(){
    float r, area;
    printf("반지름을 입력하시오 : ");
    scanf("%f", &r);
    area = r * r * pi;
    printf("원의 면적 : %f", area);
    return 0;
}