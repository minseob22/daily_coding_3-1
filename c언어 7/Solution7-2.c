#include <stdio.h>


int main(void){
    int num = 0;
    int roop =1;
    printf("양의 정수를 입력해주세요?\n");
    scanf("%d", &num);
    
    if(num<0){
        printf("양의 정수를 입력해 주세요\n");
        scanf("%d", &num);
    }

    while(roop<num+1){
        
        printf(" %d\n",roop*3 );
        roop++;
    }
    return 0;
}