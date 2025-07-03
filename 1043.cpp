#include <stdio.h>

int main (){

    double AREA, PER, A, B, C;

    scanf("%lf%lf%lf", &A, &B, &C);
    PER = A+B+C;
    AREA = ((A+B)*C)/2;

    if (A < (B+C) && B < (C+A) && C < (B+A)) {

        printf("Perimetro = %.1lf", PER);

    } else {

        printf("Area = %.1lf", AREA);

    }
    return 0;
}