/*
1000000으로 나누면 됨
*/

#include <stdio.h>
int main(){
    int income; // 과세표준
    float tax_rate;
    int income_tax, tax_free, total_tax;
    
    printf("과세 표준: ");
    scanf("%d", &income);
    
    income /= 1000000;
    
    if(income <= 12){
        tax_rate = 0.06;
    } else if(income <= 46){
        
    } else if(income <= 88){

    } else if(income <= 150){

    } else if(income <= 300){

    } else if(income <= 500){
        
    } else if(income <= 1000){
        
    }
}