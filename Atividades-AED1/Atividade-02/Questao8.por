/*
 *###################################################
 *Instituição: IFMG- BAMBUI
 *Nome: Daniel Reis Goncalves Sant'ana
 *Turma: ENGC-2022
 *Titulo: Atividade 08 da Lista 02
 *###################################################
*/
programa
{
	
	funcao inicio()
	{
		inteiro nascimento,anoatual,idade
		
		escreva("Digite o seu ano de nascimento: ")
		leia(nascimento)

		escreva("Digite o ano atual: ")
		leia(anoatual)

		enquanto(nascimento>anoatual)
		{
			escreva("\nO ano de nascimento é maior que o ano atual\n")
			escreva("Digite um ano de nascimento valido: ")
			leia(nascimento)
		}

		idade=anoatual-nascimento

		se(idade==0)
		{
			escreva("\nVocê é um recem nascido\n")
		}
		senao se(idade==1)
		{
			escreva("\nVocê tem ",idade," ano!\n")
		}
		senao
		{
			escreva("\nVocê tem ",idade," anos!\n")
		}
	}
}