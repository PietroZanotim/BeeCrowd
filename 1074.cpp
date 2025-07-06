#include <stdio.h>

int main(){

    int N,rep=1;

    scanf("%d", &N);

    int valores[N];

    while(rep <= N){

        scanf("%d", &valores[rep]);
        rep++;

    }

    for(rep=1; rep <= N; rep++){

        if(valores[rep] == 0){
            printf("NULL\n");
            continue;
        }

        if(valores[rep]%2 == 0){
            printf("EVEN ");
        } else if (valores[rep]%2 != 0){
            printf("ODD ");
        }

        if(valores[rep] > 0){
            printf("POSITIVE\n");
        } else {
            printf("NEGATIVE\n");
        }
    }
    return 0;
}