/*
 *###################################################
 *Instituição: IFMG- BAMBUI
 *Nome: Daniel Reis Goncalves Sant'ana
 *Turma: ENGC-2022
 *Titulo: Atividade 02 da Lista 02
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

		escreva("\nO valor da sua divida total é igual a: R$",total,"\n")
		se(total>0)
		{
			escreva("Proxima vez se programe para pagar dentro do prazo \n")
		}
		senao
		{
			escreva("Parabens voce ainda nao tem nenhuma multa de atraso \n")	
		}
	}
}
