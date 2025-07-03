#include <stdio.h>

int main(){

    double salario,novosalario;

    scanf("%lf", &salario);

    if (salario < 0){
        printf("Erro");
        return 0;
    }

    if (salario >= 0 && salario <= 400 ) {
        novosalario = salario*1.15;
        printf("Novo salario: %.2lf\n", novosalario);
        printf("Reajuste ganho: %.2lf\n", novosalario-salario);
        printf("Em percentual: 15 %%\n");
        return 0;
    }
    if (salario >= 400.01 && salario <= 800) {
        novosalario = salario*1.12;
        printf("Novo salario: %.2lf\n", novosalario);
        printf("Reajuste ganho: %.2lf\n", novosalario-salario);
        printf("Em percentual: 12 %%\n");
        return 0;
    }
    if (salario >= 800.01 && salario <= 1200) {
        novosalario = salario*1.10;
        printf("Novo salario: %.2lf\n", novosalario);
        printf("Reajuste ganho: %.2lf\n", novosalario-salario);
        printf("Em percentual: 10 %%\n");
        return 0;
    }
    if (salario >= 1200.01 && salario <= 2000) {
        novosalario = salario*1.07;
        printf("Novo salario: %.2lf\n", novosalario);
        printf("Reajuste ganho: %.2lf\n", novosalario-salario);
        printf("Em percentual: 7 %%\n");
        return 0;
    }
    if (salario > 2000 ) {
        novosalario = salario*1.04;
        printf("Novo salario: %.2lf\n", novosalario);
        printf("Reajuste ganho: %.2lf\n", novosalario-salario);
        printf("Em percentual: 4 %%\n");
        return 0;
    }
    return 0;
}