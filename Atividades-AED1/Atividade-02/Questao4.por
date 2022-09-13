/*
 *###################################################
 *Instituição: IFMG- BAMBUI
 *Nome: Daniel Reis Goncalves Sant'ana
 *Turma: ENGC-2022
 *Titulo: Atividade 04 da Lista 02
 *###################################################
*/
programa
{
	
	funcao inicio()
	{
		//f(x,y) = 3x – 4y + (y-x),
		real total
		inteiro x,y

		escreva("Digite valores inteiros para X e Y da função\n")
		
		escreva("Digite o valor de X: ")
		leia(x)
		
		escreva("Digite o valor de Y: ")
		leia(y)

		total=3*x - 4*y+(y-x)

		escreva("O resultado da função é: f(",x,",",y,")=",total)
	}
}