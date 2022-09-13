/*
 *###################################################
 *Instituição: IFMG- BAMBUI
 *Nome: Daniel Reis Goncalves Sant'ana
 *Turma: ENGC-2022
 *Titulo: Atividade 03 da Lista 02
 *###################################################
*/
programa
{
	
	funcao inicio()
	{
	
		real divida,multa,total
		inteiro dias

		escreva("Neste algoritimo usamos '.' para numeros reais \n")
		escreva("Digite o valor da original da divida: ")
		leia(divida)

		escreva("Digite a quantidade de dias em atraso: ")
		leia(dias)

		escreva("Digite o valor da multa por dia de atraso: ")
		leia(multa)

		total=dias*multa+divida

		escreva("\nValor da dívida original: R$",divida,"\n")
		escreva("Valor da multa: R$",multa,"\n")
		escreva("Valor da dívida atualizado: R$",total,"\n")

		se(total>0)
		{
			escreva("\nProxima vez se programe para pagar dentro do prazo.\n")
		}
		senao
		{
			escreva("\nParabens voce ainda nao tem nenhuma multa de atraso.\n")	
		}
	}
}