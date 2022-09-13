/*
 *###################################################
 *Instituição: IFMG- BAMBUI
 *Nome: Daniel Reis Goncalves Sant'ana
 *Turma: ENGC-2022
 *Titulo: Atividade 15 da Lista 02
 *###################################################
*/
programa
{
	
	funcao inicio()
	{
		inteiro contador=0,numeros[10],maior=0,menor=0

		enquanto(contador<=9)
		{
			escreva("\nDigite o ",contador+1,"º numero inteiro: ")
			leia(numeros[contador])

			se(numeros[contador]>=numeros[maior])
			{
				maior=contador
			}

			senao se(numeros[contador]<=numeros[menor])
			{
				menor=contador
			}
			contador=contador+1
		}

		escreva("\nO maior valor digitado foi: ",numeros[maior],"\n")
		escreva("O menor valor digitado foi: ",numeros[menor],"\n")
	}
}