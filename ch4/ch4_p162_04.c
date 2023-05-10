// 상자의 부피를 구하여라. 길이 값은 모두 double형을 사용해 입력 받아라
#include <stdio.h>
int main(){
    double a, b, c;
    double v;
    
    printf("상자의 가로 세로 높이를 한번에 입력 : ");
    scanf("%lf %lf %lf", &a, &b, &c);

    v = a * b * c;

    printf("상자의 부피는 %lf입니다.", v);

    return 0;
}