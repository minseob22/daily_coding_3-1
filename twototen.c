#include <stdio.h>

void DTB(int dec) {
    if (dec > 1)
        DTB(dec / 2);

    printf("%d", dec % 2);
}

int main() {
    int dec;

    printf("십진수를 입력하시오: ");
    scanf("%d", &dec);

    printf("이진수: ");
    DTB(dec);
    printf("\n");

    return 0;
}