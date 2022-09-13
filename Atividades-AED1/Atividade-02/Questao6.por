/*
 *###################################################
 *Instituição: IFMG- BAMBUI
 *Nome: Daniel Reis Goncalves Sant'ana
 *Turma: ENGC-2022
 *Titulo: Atividade 06 da Lista 02
 *###################################################
*/
programa
{
	
	funcao inicio()
	{
		inteiro numero,resto

		escreva("Digite um numero inteiro: ")
		leia(numero)

		resto=numero%2

		se(resto==0)
		{
			escreva("\nO numero ",numero," é par.\n")
		}
		senao
		{
			escreva("\nO numero ",numero," é impar.\n")
		}
		
	}
}