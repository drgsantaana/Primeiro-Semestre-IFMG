/*
 *###################################################
 *Nome: Daniel Reis Goncalves Sant'ana
 *Data: 14/08/2022
 *Turma: ENGC-2022
 *Titulo: Questao 14 - Atividade 05
 *###################################################
*/
#include <iostream>
#include <stdlib.h>
#include <clocale>

//VARIAVEIS GLOBAIS:



//FUNÇOES:
void crescente(){

int num[3],numcrescente[3];

    for(int i=0;i<3;i++){
    std::cout << "Digite o " << i+1 << "º numero inteiro: ";
    std::cin >> num[i];
    }
    if(num[1] < num[0]){
        numcrescente[1] = num[0];
        numcrescente[0] = num[1];
    }

    if(num[2] < num[0]){
        numcrescente[2] = num[0];
        numcrescente[0] = num[2];
    }

    if(num[2] < num[1]){
        numcrescente[2] = num[1];
        numcrescente[1] = num[2];
    }
    std::cout << std::endl;
    std::cout << "Numeros originais: " << std::endl;
    for(int i=0;i<3;i++){
        std::cout << num[i] << " " ;
    }
    std::cout << std::endl;
    std::cout << "Numeros trocados: " << std::endl;
    for(int i=0;i<3;i++){
        std::cout << numcrescente[i] << " " ;
    }
}


//BLOCO PRINCIPAL:

int main() {
    setlocale(LC_ALL, "Portuguese");

    crescente();

    std::cout << std::endl;
    system ("pause");
    return 0;
}
