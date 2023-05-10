#include <stdio.h>
int calculate(int a, int b, char op);

int main(){
    int a, b;
    char op;

    while(1){
        printf("연산을 입력하시오 : ");
        scanf("%d %c %d", &a, &op, &b);
        printf("연산의 결과 : %d\n", calculate(a, b, op));
    }

    return 0;

}

int calculate(int a, int b, char op){
    static int plus = 0, minus = 0, gob = 0, nanugi = 0;
    switch (op)
    {
    case '+':
        plus++;
        printf("덧셈은 총 %d번 실행되었습니다\n", plus);
        return a + b;
        break;

    case '-':
        minus++;
        printf("뺄셈은 총 %d번 실행되었습니다\n", minus);
        return a - b;
        break;
    
    case '*':
        gob++;
        printf("곱셈은 총 %d번 실행되었습니다\n", gob);
        return a * b;
        break;

    case '/':
        nanugi++;
        printf("나눗셈은 총 %d번 실행되었습니다\n", nanugi);
        return a / b;
        break;
    }
    
}