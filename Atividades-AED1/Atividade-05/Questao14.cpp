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

int num[3],temp;

    for(int i=0;i<3;i++){
    std::cout << "Digite o " << i+1 << "º numero: ";
    std::cin >> num[i];
    }
    if(num[1] < num[0]){
        temp = num[0];
        num[0] = num[1];
        num[1] = temp;
    }

    if(num[2] < num[0]){
        temp = num[0];
        num[0] = num[2];
        num[2] = temp;
    }

    if(num[2] < num[1]){
        temp = num[1];
        num[1] = num[2];
        num[2] = temp;
    }
    std::cout << std::endl;
    for(int i=0;i<3;i++){
    std::cout << num[i] << " " ;
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
