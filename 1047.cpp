#include <stdio.h>

int main (){

    int hora1, min1, hora2, min2;
    int horafinal, minfinal;

    scanf("%d%d%d%d", &hora1, &min1, &hora2, &min2);

    if(hora1 > 24 || hora2 > 24 || min1 > 59 || min2 > 59){
        printf("Invalido\n");
        return 0;
    }

    if (hora2 - hora1 > 0){
        horafinal = hora2-hora1;
    } else if (hora2-hora1 < 0) {
        hora1 = hora1-24;
        horafinal = hora1+hora2;
    } else {
        horafinal = 24;
    }

    if(min2-min1 > 0){
        minfinal = min2-min1;
    } else if (min2-min1 < 0){
        min1 = 60-min1;
        minfinal = min1+min2;

        if(minfinal <= 59){
            horafinal = 0;
        }

    } else {
        printf("Invalido\n");
        return 0;
    }

    printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", horafinal, minfinal);


    return 0;
}