/*
 *###################################################
 *Instituição: IFMG- BAMBUI
 *Nome: Daniel Reis Goncalves Sant'ana
 *Turma: ENGC-2022
 *Titulo: Atividade 01 da Lista 02
 *###################################################
*/
programa
{
	
	funcao inicio()
	{
		real preco,reais,litros

		escreva("Neste algoritimo usamos '.' para numeros reais \n")
		escreva("Digite o valor do litro da gasolina: ")
		leia(preco)

		escreva("Digite o valor em reais para o abastecimento: ")
		leia(reais)

		litros=reais/preco

		escreva("Com R$",reais," ira abastecer ",litros," Litros de Gasolina")
		
	}
}
