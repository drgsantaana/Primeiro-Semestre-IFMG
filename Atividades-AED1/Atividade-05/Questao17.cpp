/*
 *###################################################
 *Nome: Daniel Reis Goncalves Sant'ana
 *Data: 13/08/2022
 *Turma: ENGC-2022
 *Titulo: Questao 0 - Atividade 05
 *###################################################
*/
#include <iostream>
#include <stdlib.h>
#include <clocale>

//VARIAVEIS GLOBAIS:

    int matA[4][4];

//FUNÇOES:

void leia(){

    for(int i=0;i<4;i++){
        for(int j=0;j<4;j++){
            std::cout << "Digite um numero inteiro: ";
            std::cin >> matA[i][j];
        }
    }
}
float mediaprincipal(){
    float media=0;
    for(int i=0;i<4;i++){
        for(int j=0;j<4;j++){
            if(i==j){
                media=media+matA[i][j];
            }
        }
    }
    media=media/4;
    return media;
}
void principal(){

    for(int i=0;i<4;i++){
        for(int j=0;j<4;j++){
            if(i==j){
                std::cout << matA[i][j] << " ";
            }
        }
    }

}

void secundaria(){

  for(int i=0;i<4;i++){
            std::cout<< matA[i][4-1-i] << " ";
    }

}

//BLOCO PRINCIPAL:

int main() {
    setlocale(LC_ALL, "Portuguese");
    float media;

    leia();

    media=mediaprincipal();
    std::cout << "A media da diagonal principal é: " << media << std::endl;

    principal();
    std::cout << std::endl;
    secundaria();
    std::cout << std::endl;

    std::cout << std::endl;
    system ("pause");
    return 0;
}
