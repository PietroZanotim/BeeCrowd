#include <stdio.h>

int main()
{

    int hora1, min1, hora2, min2;
    int horafinal, minfinal;

    scanf("%d%d%d%d", &hora1, &min1, &hora2, &min2);

    if(hora1 > 24 || hora2 > 24 || min1 > 60 || min2 > 60){
        return 0;
    }

    if (hora1 < hora2){
        horafinal = hora2-hora1;
        if(horafinal == 1){
            horafinal = 0;
        }

        if(min1 <= min2){
            minfinal = min2-min1;
        } else if (min1 > min2) {
            min1 = 60-min1;
            minfinal = min1+min2;
        } 
    }

    if (hora1 > hora2){
        hora1 = 24-hora1;
        horafinal = hora1+hora2;
        if(horafinal == 1){
            horafinal = 0;
        }

        if(min1 <= min2){
            minfinal = min2-min1;
        } else if (min1 > min2) {
            min1 = 60-min1;
            minfinal = min1+min2;
        } 

    }

    if (hora1 == hora2){
        horafinal == 24;
    }

    printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", horafinal, minfinal);

    return 0;
}