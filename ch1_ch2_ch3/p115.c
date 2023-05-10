/*

문제 ex
3개의 실수를 입력하세요 : xx xx xx
합계 = xx.xx
평균 = xx.xx

실수 3개 double형으로 a, b, c에 입력받기
합계 double형으로 sum
평균 double형으로 avg
*/

#include <stdio.h>
int main(){
    double a, b, c;
    double sum, avg;

    printf("3개의 실수를 입력하세요 : ");
    scanf("%lf %lf %lf", &a, &b, &c);

    sum = a + b + c;
    avg = sum / 3.0;

    printf("합계 : %.2lf \n", sum);
    printf("평균 : %.2lf", avg);
    
    return 0;
}