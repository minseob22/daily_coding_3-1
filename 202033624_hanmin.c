#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    if (argc != 4) {
        printf("사법: %s a b c\n", argv[0]);
        return 1;
    }

    double a = atof(argv[1]);
    double b = atof(argv[2]);
    double c = atof(argv[3]);
    double D = b * b - 4.0 * a * c;
    double x1, x2;

    if (D > 0) {
        x1 = (-b + sqrt(D)) / (2.0 * a);
        x2 = (-b - sqrt(D)) / (2.0 * a);
        printf("근: %lf, %lf\n", x1, x2);
    } else if (D == 0) {
        x1 = -b / (2.0 * a);
        printf("근: %lf\n", x1);
    } else {
        printf("근이 없습니다.\n");
    }

    return 0;
}