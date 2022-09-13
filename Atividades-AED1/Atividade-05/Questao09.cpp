/*
 *###################################################
 *Nome: Daniel Reis Goncalves Sant'ana
 *Data: 14/08/2022
 *Turma: ENGC-2022
 *Titulo: Questao 9 - Atividade 05
 *###################################################
*/
#include <iostream>
#include <stdlib.h>
#include <clocale>

//VARIAVEIS GLOBAIS:



//FUNÇOES:

bool parouimpar(int num){

    if(num==0){
        exit(0);
    }else{
        if(num%2==0){
            return true;
        }else{
            return false;
        }
    }
}


//BLOCO PRINCIPAL:

int main() {
    setlocale(LC_ALL, "Portuguese");

    int num;
    bool pi;
    for(;;){
        std::cout << "Digite um numero: ";
        std::cin >> num;
        pi=parouimpar(num);
        if(pi){
            std::cout << num << " é par" << std::endl;
            system ("pause");
            system ("cls");
        }else{
            std::cout << num << " é impar" << std::endl;
            system ("pause");
            system ("cls");
        }
    }
    std::cout << std::endl;
    system ("pause");
    return 0;
}
