#include <stdio.h>




int main(void){
    int num = 0;
    printf("몇 번 반복하실래요?\n");
    scanf("%d", &num);
    
    if(num<0){
        printf("양의 정수를 입력해 주세요\n");
        scanf("%d", &num);
    }

    while(num!=0){
        printf("Hello World! %d \n", num);
        num--;
    }
    return 0;
}