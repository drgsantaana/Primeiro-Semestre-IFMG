/*
 *###################################################
 *Nome: Daniel Reis Goncalves Sant'ana
 *Data: 13/08/2022
 *Turma: ENGC-2022
 *Titulo: Questao 06 - Atividade 05
 *###################################################
*/
#include <iostream>
#include <stdlib.h>
#include <clocale>

//VARIAVEIS GLOBAIS:



//FUNÇOES:
int fatora(int n){
   int i, fat ;

   if (n <= 1)
      return (1) ;

   fat = 1 ;
   for (i=2; i <= n; i++)
      fat *= i ;

   return fat;

}
//BLOCO PRINCIPAL:

int main() {
    setlocale(LC_ALL, "Portuguese");
    int num;

    std::cout << "Digite um numero: ";
    std::cin >> num;

    std::cout << num << "! = " <<fatora(num);


    std::cout << std::endl;
    system ("pause");
    return 0;
}
