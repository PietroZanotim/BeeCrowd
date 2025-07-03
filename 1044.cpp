#include <stdio.h>

int main(){

    int reservan2, n1, n2;

    scanf("%d%d", &n1, &n2);

    /*if (n1 < n2){
        n1 = n1;
    } else {
        if (n1 > n2) {
            reservan2 = n2;
            n2 = n1;
            n1 = reservan2;
        }
    }
    Fiz isso inicialmente...
    */

        printf("%d", n2%n1);

        if (n2%n1 == 0 || n1%n2 == 0) {
            printf("Sao Multiplos\n");
        } else {
            printf("Nao sao Multiplos\n");
        }
    // 
}