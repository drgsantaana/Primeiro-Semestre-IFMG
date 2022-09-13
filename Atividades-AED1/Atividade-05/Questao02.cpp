/*
 *###################################################
 *Nome: Daniel Reis Goncalves Sant'ana
 *Data: 13/08/2022
 *Turma: ENGC-2022
 *Titulo: Questao 2 - Atividade 05
 *###################################################
*/
#include <iostream>
#include <stdlib.h>
#include <clocale>

//VARIAVEIS GLOBAIS:



//FUNÇOES:

float converter (float c){

    float f = c * 1.8 + 32;

    return f;
}


//BLOCO PRINCIPAL:

int main() {
    setlocale(LC_ALL, "Portuguese");

    float c,f;

    std::cout << "Digite um valor em celsius: ";
    std::cin >> c;
    f=converter(c);
    std::cout<< c<< "º celsius fica: " << f << "º em fahrenheit" << std::endl;

    std::cout << std::endl;
    system ("pause");
    return 0;
}
