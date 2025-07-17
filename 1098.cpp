#include <stdio.h>

int main(){

    double I, J=1;

    for(I=0; I <= 2; I += 0.2){

        for(J=1; J <=3; J++){
            printf("I=%g J=%g\n",I, J+I);
        }

    }
    return 0;
}