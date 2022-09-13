/*
 *###################################################
 *Instituição: IFMG- BAMBUI
 *Nome: Daniel Reis Goncalves Sant'ana
 *Turma: ENGC-2022
 *Titulo: Atividade 14 da Lista 02
 *###################################################
*/
programa
{
	
	funcao inicio()
	{
		cadeia nome
		inteiro contador=0,idade=0
		real media=0.0

		
		escreva("Para finalização do algoritimo escreva 'fim' no lugar do nome!!\n")

		faca
		{
			escreva("\nDigite o ",contador+1,"º nome: ")
			leia(nome)
				se(nome=="fim")
				{
					pare
				}
			escreva("Digite a idade desta pessoa: ")
			leia(idade)
			escreva("\n")
			media=media+idade
			contador=contador+1
		}
		enquanto(nome!="fim")

		se(idade==0)
		{
			escreva("\nPrograma finalizado sem nenhum nome inserido!!\n")
		}
		senao
		{
			media=media/contador
			escreva("\nA media de idade das ",contador," pessoas é de: ",media,"\n")
		}
		
	}
}