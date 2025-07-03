#include <stdio.h>
 
int main() {

    int a,b,c;
    int maior1, maior2, maior3;

    scanf("%d%d%d", &a, &b, &c);

    if ( a > b){
        maior1 = a;
        maior2 = b;
    } else {
        maior1 = b;
        maior2 = a;
    }

    if (c > maior1) {
        maior3 = maior2;
        maior2 = maior1;
        maior1 = c;
    } else {
        if (c > maior2){
            maior3 = maior2;
            maior2 = c;
        } else {
            maior3 = c;
        }
    }

    printf("%d\n", maior3);
    printf("%d\n", maior2);
    printf("%d\n", maior1);
    printf("\n");
    printf("%d\n", a);
    printf("%d\n", b);
    printf("%d\n", c);

    return 0;

}