#include <stdio.h>

int main(){

    int valor;
    int par[5], impar[5];
    int contapar=0;
    int contaimpar=0;

    for(int i=0; i<5; i++){
        par[i] = 0;
        impar[i] = 0;
    }

    for(int i = 1; i <=15; i++){

        scanf("%d", &valor);

        if(valor%2==0){

            if(par[4]!=0){

                for(int i = 0; i <5; i++){
                    printf("par[%d] = %d\n", i, par[i]);
                    par[i] = 0;
                }
                par[0]=valor;
                contapar = 1;

            } else {
                par[contapar] = valor;
                contapar++;
            }

        } else {

            if(impar[4]!=0){

                for(int i = 0; i <5; i++){
                    printf("impar[%d] = %d\n", i, impar[i]);
                    impar[i]=0;
                }
                impar[0] = valor;
                contaimpar = 1;

            } else {
                impar[contaimpar] = valor;
                contaimpar++;
            }


        }


    }

    for(int i =0; i <5; i++){
        if(impar[i]!=0){
        printf("impar[%d] = %d\n", i, impar[i]);
        }
    }
    for(int i =0; i <5;i++){
        if(par[i]!=0){
        printf("par[%d] = %d\n", i, par[i]);
        }
    }


    return 0;
}