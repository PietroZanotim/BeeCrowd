#include <stdio.h>

int main(){

    int M=1;

    while(0==0){

        scanf("%d", &M);

        if(M==0){
            break;
        }

        int matriz[M][M];

        for(int a = 0; a < M; a++){
            for(int b = 0; b < M; b++){
                matriz[a][b] = 1;
            }
        }

        for(int a = 0; a < M; a++){
            for(int b = 0; b < M; b++){

                int distanciaBaixo = (M-1)-a;
                int distanciaDireita = (M-1)-b;

                int vetor[4] = {a,b,distanciaBaixo,distanciaDireita};

                int conta = 0;

                for(int a = conta; a < 4; a++){
                    for(int b = conta; b < 4; b++){

                        if(vetor[a]>vetor[b]){
                            int temp = vetor[a];
                            vetor[a] = vetor[b];
                            vetor[b]= temp;
                        }

                    }

                    conta++;
                }
                
                matriz[a][b] += vetor[0]; 
            
            }
        }

        for(int a = 0; a < M; a++){
            for(int b = 0; b < M; b++){
                if(b==0){
                    printf("%3d", matriz[a][b]);
                } else {
                    printf(" %3d", matriz[a][b]);
                }
    
            }
            printf("\n");
        }
        printf("\n");

    }
    return 0;
}