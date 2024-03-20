#include <stdio.h>

int main(void){
    int num;
    int sum = 0;
    int n = 0;
    float avg = 0.0;

    printf("정수를 입력해주세요? (0을 입력하면 종료됩니다)\n");
    scanf("%d", &num);

    while(num != 0){
        sum = sum + num;
        n++;
        avg = (float)sum / n;  // 실수 나눗셈을 사용하여 평균 계산
        printf("현재 평균: %f\n", avg);

        printf("정수를 입력해주세요? (0을 입력하면 종료됩니다)\n");
        scanf("%d", &num);
    }

    return 0;
}