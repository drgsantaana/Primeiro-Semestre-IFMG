/*
 *###################################################
 *Instituição: IFMG- BAMBUI
 *Nome: Daniel Reis Goncalves Sant'ana
 *Turma: ENGC-2022
 *Titulo: Atividade 01 da Lista 02 em C++
 *###################################################
*/
#include <iostream>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");

    	float preco,reais,litros;

		std::cout << "Neste algoritimo usamos '.' para numeros reais \n";
		std::cout << "Digite o valor do litro da gasolina: ";
		std::cin >> preco;

		std::cout << "Digite o valor em reais para o abastecimento: ";
		std::cin >> reais;

		litros = reais/preco;

		std::cout << "Com R$" << reais << " ira abastecer " << litros << " Litros de Gasolina";


    std::cout << std::endl;
    system ("pause");
    return 0;
}
