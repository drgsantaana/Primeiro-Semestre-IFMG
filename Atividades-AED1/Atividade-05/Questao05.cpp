/*
 *###################################################
 *Nome: Daniel Reis Goncalves Sant'ana
 *Data: 13/08/2022
 *Turma: ENGC-2022
 *Titulo: Questao 05 - Atividade 05
 *###################################################
*/
#include <iostream>
#include <stdlib.h>
#include <clocale>

//VARIAVEIS GLOBAIS:

int tabuada[4][10];

//FUNÇOES:

int calcular(int n){
    for(int i=0;i<4;i++){
        for(int j=0;j<10;j++){
            if(i==0){
                tabuada[i][j]= n+j;
            }else{
                if(i==1){
                    tabuada[i][j]= n-j;
                }else{
                    if(i==2){
                        tabuada[i][j]= n*j;
                    }else{
                        if(i==3){
                            if(j==0){
                                tabuada[i][j]=0;
                            }else{
                            tabuada[i][j]= n/j;
                            }
                        }
                    }
                }
            }
        }
    }

}

void leia(){
    int numero;
    do{
        std::cout << "Digite -1 para sair ou um numero inteiro para ter a tabuada: ";
        std::cin >> numero;
        if(numero<0){
            break;
        }
        calcular(numero);
    for(int i=0;i<4;i++){
        for(int j=0;j<10;j++){
            if(i==0){
                std::cout << numero << "+" << j << "=" << tabuada[i][j] << "\n";
            }else{
                if(i==1){
                    std::cout << numero << "-" << j << "=" << tabuada[i][j] << "\n";
                }else{
                    if(i==2){
                        std::cout << numero << "*" << j << "=" << tabuada[i][j] << "\n";
                    }else{
                        if(i==3){
                            std::cout << numero << "/" << j << "=" << tabuada[i][j] << "\n";
                        }
                    }
                }
            }
        }
        std::cout << std::endl;
    }
    std::cout << std::endl;
    }while(numero>=0);

}
//BLOCO PRINCIPAL:

int main() {
    setlocale(LC_ALL, "Portuguese");

    leia();


    std::cout << std::endl;
    system ("pause");
    return 0;
}
