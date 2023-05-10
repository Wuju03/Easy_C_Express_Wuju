#include <stdio.h>
int main(){
    printf("일\t월\t화\t수\t목\t금\t토\n");
    for(int i=1; i<32; i++){
        if(i%7 == 0){
            printf("%d\n", i);
        } else {
        printf("%d\t", i);
        }
    }

    return 0;
}