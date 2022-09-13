/*
 *###################################################
 *Nome: Daniel Reis Goncalves Sant'ana
 *Data: 13/08/2022
 *Turma: ENGC-2022
 *Titulo: Questao 4 - Atividade 05
 *###################################################
*/
#include <iostream>
#include <stdlib.h>
#include <clocale>

//VARIAVEIS GLOBAIS:



//FUNÇOES:

bool verifica(int n, int d){

    bool vf;

    if(n%d==0){
        return true;
    }
    else{
        return false;
    }

}



//BLOCO PRINCIPAL:

int main() {
    setlocale(LC_ALL, "Portuguese");
    bool vf;
    int den,num;

    std::cout << "Digite um numero inteiro (Numerador): ";
    std::cin >> num;
    std::cout << "Digite um numero inteiro (Denominador): ";
    std::cin >> den;

    vf=verifica(num,den);

    if(vf){
        std::cout << "É multiplo";
    }
    else{
        std::cout << "Não é multiplo";
    }


    std::cout << std::endl;
    system ("pause");
    return 0;
}
