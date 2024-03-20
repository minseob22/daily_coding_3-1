#include <stdio.h>


int main(void){
    int num = 1;
    int sum = 0;

    while(num!=0){
    printf("정수를 입력해주세요?\n");
    scanf("%d", &num);       
    sum = sum+num;
    printf(" %d\n",sum);
    }
    return 0;
}