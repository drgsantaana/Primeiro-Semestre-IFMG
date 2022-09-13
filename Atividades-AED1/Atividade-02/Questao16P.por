/*
 *###################################################
 *Instituição: IFMG- BAMBUI
 *Nome: Daniel Reis Goncalves Sant'ana
 *Turma: ENGC-2022
 *Titulo: Atividade 16 da Lista 02
 *###################################################
*/
programa
{
	
	funcao inicio()
	{
		inteiro contador,contnumeros=0
		real numeros[20]

		escreva("Para numeros reais utilizar '.'\n")
		escreva("\n")
		para(contador=0; contador<=19; contador+=1)
		{
			
			escreva("Digite um numero qualquer: ")
			leia(numeros[contador])

			se((numeros[contador]>=100) e (numeros[contador]<=200))
			{
				contnumeros= contnumeros + 1
			}
		}
		se(contnumeros==0)
		{
			escreva("\nNenhum número entre 100 e 200 foi informado!\n")
		}
		senao
		{
			escreva("\nForam informados ",contnumeros," numeros entre 100 e 200.\n")

		}
	}
}