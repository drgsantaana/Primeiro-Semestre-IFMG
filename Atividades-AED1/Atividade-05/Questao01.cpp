/*
 *###################################################
 *Nome: Daniel Reis Goncalves Sant'ana
 *Data: 13/08/2022
 *Turma: ENGC-2022
 *Titulo: Questao 1 - Atividade 05
 *###################################################
*/
#include <iostream>
#include <stdlib.h>
#include <clocale>

//VARIAVEIS GLOBAIS:



//FUNÇOES:
float funcao(int indice){

    int resultado= 2*indice+4;

return resultado;
}

void chama(){

    for(int i=0;i<20;i++){
        std::cout << "f(" << i << ") = " << funcao(i) << std::endl;
    }

}


//BLOCO PRINCIPAL:

int main() {
    setlocale(LC_ALL, "Portuguese");

    chama();

    std::cout << std::endl;
    system ("pause");
    return 0;
}
