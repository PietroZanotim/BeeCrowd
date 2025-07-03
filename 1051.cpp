#include <stdio.h>

int main (){

    double salario;

    scanf("%lf", &salario);

    if (salario >= 2000.01 && salario <= 3000){
        salario = salario-2000;
        salario = salario*0.08;

    } else if (salario >= 3000.01 && salario <= 4500){
        salario = salario-3000;
        salario = (salario*0.18)+(1000*0.08);

    } else if (salario > 4500){
        salario = salario-4500;
        salario = (salario*0.28)+(1500*0.18)+(1000*0.08);

    } else {
        printf("Isento\n");
        return 0; // Encerra o programa aqui e não imprime o salário.
    }

    printf("R$ %.2lf\n", salario);

    return 0;
}