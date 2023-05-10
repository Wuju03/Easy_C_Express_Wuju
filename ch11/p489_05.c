#include <stdio.h>
int main(){
    char str[1000];
    
    int *pt_int = (int *)str+25; // 아님 대신 str + 100(왜냐하면 str이 char형 포인터이기에, 뒤에 있는 상수 100또한 char형 포인터 상수로 취급되어 100바이트로 전환됨)
    float *pt_float = pt_int + 1;

    
    str[0] = 'a';
    *pt_int = 100;
    *pt_float = 3.14f;

    printf("%c %d %f\n", str[0], *pt_int, *pt_float);
    printf("%d %d %d", str, pt_int, pt_float);

    return 0;
}