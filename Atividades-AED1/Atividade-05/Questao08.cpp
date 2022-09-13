/*
 *###################################################
 *Nome: Daniel Reis Goncalves Sant'ana
 *Data: 14/08/2022
 *Turma: ENGC-2022
 *Titulo: Questao 8 - Atividade 05
 *###################################################
*/
#include <iostream>
#include <stdlib.h>
#include <clocale>

//VARIAVEIS GLOBAIS:



//FUNÇOES:

int maiorn(int v[]){
    int maior=0;
    for(int i=0;i<20;i++){
        if(v[i]>=maior){
            maior=v[i];
        }

    }

    return maior;
}

void armazene(){
    int vet[20],maior;

    for(int i=0;i<20;i++){
    std::cout << "Digite o " << i+1 << "º numero: ";
    std::cin >> vet[i];
    }

    maior=maiorn(vet);

    std::cout << "O maior numero digitado foi: "<< maior;


}


//BLOCO PRINCIPAL:

int main() {
    setlocale(LC_ALL, "Portuguese");

    armazene();

    std::cout << std::endl;
    system ("pause");
    return 0;
}
