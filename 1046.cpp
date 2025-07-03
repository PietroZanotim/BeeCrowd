#include <stdio.h>

int main (){

    int a,b;

    scanf("%d%d", &a,&b);

    if (a > 24 || b > 24 ){
        return 0;
    }

    if ((b-a) > 0){
        printf("O JOGO DUROU %d HORA(S)\n", b-a);
    } else if (a-b == 0){
        printf("O JOGO DUROU 24 HORAS\n");
    } else {
        a = 24-a;
        b = b+a;
        printf("O JOGO DUROU %d HORA(S)\n", b);
    }
    return 0;
}