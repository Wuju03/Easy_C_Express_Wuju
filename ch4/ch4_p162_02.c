/*
문제 정수 16진수로 입력 받아서, 8, 10, 16진수 형태로 출력하기
*/

#include <stdio.h>
int main(){
    int a;
    
    printf("16진수로 정수를 입력하시오 : ");
    scanf("%x", &a);
    printf("8진수로는 %#o입니다.\n", a);
    printf("10진수로는 %d입니다.\n", a);
    printf("16진수는 %#x입니다.", a);

    return 0;
}