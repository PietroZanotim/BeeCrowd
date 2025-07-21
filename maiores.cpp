#include <iostream>
#include <vector>
#include <iomanip>

void ordemcrescente(std::vector<int> &compara, int tam){

    int cont1,cont2;
    
    for(cont1=0; cont1 < tam; cont1 ++){

        for(cont2= cont1+1; cont2 < tam; cont2++){

            if(compara[cont1] > compara[cont2]){
                int temp = compara[cont1];
                compara[cont1] = compara[cont2];
                compara[cont2] = temp;

            }
        }
    }
}

int main(){

    int num,cont;
    int numeros;
    std::vector<int> valores;

    std::cout << "Digite quantos numeros gostaria de comparar: " << std::endl;

    std::cin >> num;

    valores.resize(num);

    std::cout <<"Favor digite os numeros abaixo: " << std::endl;

    for(cont=0; cont < num; cont++){

        std::cin >> valores[cont];
    
    }

    ordemcrescente(valores, num);

    std::cout << "Os numeros digitados em ordem crescente são:" << std::endl;

    for(cont=0; cont < num;cont++){
        std::cout << valores[cont] << std::endl;
    }

    return 0;

}