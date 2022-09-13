/*
 *###################################################
 *Instituição: IFMG- BAMBUI
 *Nome: Daniel Reis Goncalves Sant'ana
 *Turma: ENGC-2022
 *Titulo: Atividade 07 da Lista 02
 *###################################################
*/
programa
{
	
	funcao inicio()
	{
		real salario,prestacao,porcentagem

		escreva("Neste algoritimo usamos '.' para numeros reais \n")
		escreva("Digite o valor do salario bruto: ")
		leia(salario)

		escreva("Digite o valor da prestação desejada: ")
		leia(prestacao)

		porcentagem=salario*30
		porcentagem=porcentagem/100

		se(porcentagem>=prestacao)
		{
			escreva("\nO emprestimo foi aprovado\n")
		}
		senao
		{
			escreva("\nO emprestimo foi negado\n")
		}
	}
}