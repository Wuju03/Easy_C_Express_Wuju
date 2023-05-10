#include <stdio.h>
int main(){
    int num[3];
    for(int i = 0; i < 3; i++){
        scanf("%d", &num[i]);
    }

    printf("주소\t값\n");

    for(int i = 0; i < 3; i++){
        printf("%08x\t%03d\n", &num[i], num[i]);
    }

    return 0;
}