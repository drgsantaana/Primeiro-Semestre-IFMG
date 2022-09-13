/*
 *###################################################
 *Instituição: IFMG- BAMBUI
 *Nome: Daniel Reis Goncalves Sant'ana
 *Turma: ENGC-2022
 *Titulo: Atividade 02 da Lista 02 em C++
 *###################################################
*/
#include <iostream>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");

        float divida,multa,total;
        int dias;

            std::cout << "Neste algoritimo usamos '.' para numeros reais \n";
            std::cout << "Digite o valor da original da divida: ";
            std::cin >> divida;

            std::cout << "Digite a quantidade de dias em atraso: ";
            std::cin >> dias;

            std::cout << "Digite o valor da multa por dia de atraso: ";
            std::cin >> multa;

            total=dias*multa+divida;

            std::cout << "\nO valor da sua divida total é igual a: R$" << total << "\n";
            if(total>0)
            {
                std::cout << "Proxima vez se programe para pagar dentro do prazo \n";
            }
            else
            {
                std::cout << "Parabens voce ainda nao tem nenhuma multa em atraso \n";	
            }

    std::cout << std::endl;
    system ("pause");
    return 0;
}