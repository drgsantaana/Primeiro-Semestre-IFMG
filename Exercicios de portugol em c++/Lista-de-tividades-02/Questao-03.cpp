/*
 *###################################################
 *Instituição: IFMG- BAMBUI
 *Nome: Daniel Reis Goncalves Sant'ana
 *Turma: ENGC-2022
 *Titulo: Atividade 03 da Lista 02 em C++
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

		std::cout << "\nValor da dívida original: R$" << divida << "\n";
		std::cout << "Valor da multa: R$" << multa << "\n";
		std::cout << "Valor da dívida atualizado: R$" << total << "\n";

		if(total>0)
		{
			std::cout << "\nProxima vez se programe para pagar dentro do prazo.\n";
		}
		else
		{
			std::cout << "\nParabens voce ainda nao tem nenhuma multa de atraso.\n";	
		}

    std::cout << std::endl;
    system ("pause");
    return 0;
}