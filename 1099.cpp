#include <stdio.h>

int main(){

    int N,X,Y,cont=1,soma=0;
    int temp;

    scanf("%d", &N);

    for(cont; cont<=N; cont++){

        scanf("%d%d", &X,&Y);

        if(X > Y){
            temp = X;
            X = Y;
            Y = temp;
        }

        for(X++; X < Y; X++){
            
            if(X%2 != 0){
                soma += X;
            }
            
        }

        printf("%d\n", soma);
        soma = 0;


    }

}