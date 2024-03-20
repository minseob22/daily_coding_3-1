#include <stdio.h>

int main(void){
    int num = 0; //입력받을 숫자
    int sum =0; //합산된 숫자
    int i =0; // 5번 반복을 위한 정수

    while(i<5){
        printf("1 이상의 정수를 입력해주세요 : ");
        scanf("%d", &num);
        while(num <= 0){
            printf(" err 1 이상의 정수를 입력해주세요 : ");
            scanf("%d", &num);
        }
        sum += num;
        num =0;
        i++;
    }
    printf("합산된 수 : %d", sum);


    return 0;
}