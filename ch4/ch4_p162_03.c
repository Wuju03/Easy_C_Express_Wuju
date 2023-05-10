/*
문제 = int형의 변수 x와 y값을 서로 교환하는 프로그램을 작성하여라
x = 10; y = 20;
*/
#include <stdio.h>
int main(){
    int x, y, z;
    x = 10;
    y = 20;

    printf("x=%d y=%d\n", x, y);

    z = x; // x의 값을 z에 임시로 저장
    x = y; // y의 값을 x에 저장
    y = z; // y의 값을 z에서(x의 값을) 불러와서 저장

    printf("x=%d y=%d", x, y);

    return 0;
}