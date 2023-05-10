/*
문제 ex
환율을 입력하시오 : xxxx
원화 금액을 입력하시오 : xxxxx
원화 xxxxx원은 xxxxx.xxxx달러입니다.

달러 = 원화 / 환율
환율 입력받을 변수 rate(double)
원화 입력받을 변수 krw(int)
달러 계산값 받을 변수 usd(double)

*/
#include <stdio.h>
int main(){
    double rate, usd;
    int krw;
    
    printf("환율을 입력하세요 : ");
    scanf("%lf", &rate);
    printf("원화 금액을 입력하시오 : ");
    scanf("%d", &krw);
    
    usd = krw / rate;

    printf("원화 %d원은 %lf달러입니다.", krw, usd);
    
    return 0;
}