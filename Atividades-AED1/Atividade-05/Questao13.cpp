/*
 *###################################################
 *Nome: Daniel Reis Goncalves Sant'ana
 *Data: 14/08/2022
 *Turma: ENGC-2022
 *Titulo: Questao 13 - Atividade 05
 *###################################################
*/
#include <iostream>
#include <stdlib.h>
#include <clocale>

//VARIAVEIS GLOBAIS:



//FUNÇOES:

char conceitua(float med){
    if(med>=0 && med<5){
        return 'D';
    }else{
        if(med>=5 && med<7){
            return 'C';

        }else{
            if(med>=7 && med<9){
                return 'B';
            }else{
                return 'A';
            }
        }
    }

//de 0,0 a 4,9 D
//de 5,0 a 6,9 C
//de 7,0 a 8,9 B
//de 9,0 a 10,0 A
}

//BLOCO PRINCIPAL:

int main() {
    setlocale(LC_ALL, "Portuguese");

    float media;
    char conceito;

    std::cout << "Digite a media do aluno: ";
    std::cin >> media;
    while(media<0 || media>10){
        std::cout << "Digite uma media valida: ";
        std::cin >> media;
    }
    conceito=conceitua(media);

    std::cout << "O conceito dessa pessoa é: " << conceito;


    std::cout << std::endl;
    system ("pause");
    return 0;
}
