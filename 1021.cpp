#include <stdio.h>
 
int main() {
 
  double valor;
  int nt100, nt50, nt20, nt10, nt5, nt2;
  int m1;
  int m05, m025, m01, m005, m001;
  
  scanf("%lf", &valor);

  valor = valor*100;
        
    /* AO PROGREDIR NO EXERCICIO NOTEI QUE A LINGUAGEM NAO ME RETORNA EXATAMENTE A DIVISÃO INTEIRA DE UM NÚMERO
    REAL POR OUTRO NÚMERO REAL(é uma falha do double), ENTÃO É MAIS FACIL TRANSFORMAR TODOS OS NÚMEROS EXISTENTES EM INTEIROS, MULTIPLI-
    CANDO SUAS CASAS... RESUMINDO É MELHOR TRABALHAR COM INTEIROS, PELO MENOS NESTE CASO.

    Além disso o operador % funciona apenas com números inteiros.
    */

    nt100 = valor/10000; 
    valor = valor-nt100*10000;  
    
    nt50 = valor/5000;
    valor = valor-nt50*5000;
    
    nt20 = valor/2000;
    valor = valor-nt20*2000;
    
    nt10 = valor/1000;
    valor = valor-nt10*1000;
    
    nt5 = valor/500;
    valor = valor-nt5*500;
    
    nt2 = valor/200;
    valor = valor-nt2*200;
    
    
    m1 = valor/100;
    valor = valor-m1*100;

    m05 = valor/50;
    valor = valor-m05*50;
    
    m025 = valor/25;
    valor = valor-m025*25;
    
    m01 = valor/10;
    valor = valor-m01*10;
    
    m005 = valor/5;
    valor = valor-m005*5;
    
    m001 = valor/1;
    valor = valor-m001*1;
    
    printf("NOTAS:\n");
    printf("%d nota(s) de R$ 100.00\n", nt100);
    printf("%d nota(s) de R$ 50.00\n", nt50 );
    printf("%d nota(s) de R$ 20.00\n", nt20 );
    printf("%d nota(s) de R$ 10.00\n", nt10);
    printf("%d nota(s) de R$ 5.00\n", nt5);
    printf("%d nota(s) de R$ 2.00\n", nt2 );

    printf("MOEDAS:\n");
    printf("%d moeda(s) de R$ 1.00\n", m1);
    printf("%d moeda(s) de R$ 0.50\n", m05);
    printf("%d moeda(s) de R$ 0.25\n", m025);
    printf("%d moeda(s) de R$ 0.10\n", m01);
    printf("%d moeda(s) de R$ 0.05\n", m005);
    printf("%d moeda(s) de R$ 0.01\n", m001);
    
return 0; 
}