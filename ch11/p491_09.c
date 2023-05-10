#include <stdio.h>
void convert(double *grades, double *scores, int size){
    int i;
    for(i = 0; i < size; i++){
        *scores = *grades * 100.0 / 4.3;
        grades += 1; // grade의 주소 +1(8바이트)
        scores += 1; // scores의 주소 +1(8바이트)
    }

}
int main(){
    double grades[10] = {0.00, 0.50, 1.0, 1.5, 2.0, 2.5, 3.0, 3.5, 4.0, 4.3};
    double scores[10];

    convert(grades, scores, 10);

    for(int i = 0; i < 10; i++){
        printf("%.2lf ", scores[i]);
    }

    return 0;

}