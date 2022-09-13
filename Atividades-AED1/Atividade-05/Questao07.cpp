/*
 *###################################################
 *Nome: Daniel Reis Goncalves Sant'ana
 *Data: 13/08/2022
 *Turma: ENGC-2022
 *Titulo: Questao 07 - Atividade 05
 *###################################################
*/
#include <iostream>
#include <stdlib.h>
#include <clocale>

//VARIAVEIS GLOBAIS:



//FUN�OES:
int fatora(int n){
   int i,fat;

   if(n<=1)
      return(1);

   fat=1;
   for(i=2;i<=n;i++)
      fat*=i;

   return fat;

}

float operacao(int num){
    float soma=1;
        for(int i=1;i<num;i++){
            soma=soma+1/fatora(num);
        }
    return soma;
}

//BLOCO PRINCIPAL:

int main() {
    setlocale(LC_ALL, "Portuguese");

    int num,soma;

    std::cout << "Digite um numero: ";
    std::cin >> num;
    while(num==0){
        std::cout << "Digite um numero diferente de 0: ";
        std::cin >> num;
    }

    soma=operacao(num);
    std::cout << "Serie: " << soma;

    std::cout << std::endl;
    system ("pause");
    return 0;
}
