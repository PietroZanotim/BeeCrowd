#include <stdio.h>
#include <string.h>
#include <math.h>

int main(){

    char frase[10];
    

    for(int i =0; i <3;i++){

        int soma=0;

        while(1){
        fgets(frase,10,stdin);

        if(frase[0]=='c'){
            break;
        } else {
            
            int contador=2;
            for(int i=0; i<3;i++){

                if(frase[i]=='*'){
                    soma += 1*(pow(2,contador));
                }
                contador--;

            }

        }

        }
    
        printf("%d\n", soma);

    }

    return 0;
}