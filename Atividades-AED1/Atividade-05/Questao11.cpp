/*
 *###################################################
 *Nome: Daniel Reis Goncalves Sant'ana
 *Data: 14/08/2022
 *Turma: ENGC-2022
 *Titulo: Questao 11 - Atividade 05
 *###################################################
*/
#include <iostream>
#include <stdlib.h>
#include <clocale>

//VARIAVEIS GLOBAIS:



//FUNÇOES:
float converte(float v){

    v=v/60;

    return v;
}


//BLOCO PRINCIPAL:

int main() {
    setlocale(LC_ALL, "Portuguese");

    float vet[3];

    std::cout << "Digite o tempo em segundos: ";
    std::cin >> vet[0];

    for(int i=0;i<=2;i++){
        vet[i+1]=converte(vet[i]);
    }

    std::cout << vet[0] << " segundos é igual a:\n" << vet[1] << " minutos\nE\n" << vet[2] << " horas";

    std::cout << std::endl;
    system ("pause");
    return 0;
}
