/*
 *###################################################
 *Instituição: IFMG- BAMBUI
 *Nome: Daniel Reis Goncalves Sant'ana
 *Turma: ENGC-2022
 *Titulo: Atividade 09 da Lista 02
 *###################################################
*/
programa
{
	
	funcao inicio()
	{
		inteiro idade

		escreva("Digite a sua idade: ")
		leia(idade)

		se(idade>=18)
		{
			escreva("\nVocê é cassificado como Adulto\n")
		}
		senao se(idade<18 e idade>=14)
		{
			escreva("\nVocê é classificado como Sênior\n")
		}
		senao se(idade<=13 e idade>=11)
		{
			escreva("\nVocê é classificado como Juvenil\n")
		}
		senao se(idade<=10 e idade>0)
		{
			escreva("\nVocê é classificado como Infantil\n")
		}
		senao
		{
			escreva("\nVoce é um nenem\n")
		}
	}
}