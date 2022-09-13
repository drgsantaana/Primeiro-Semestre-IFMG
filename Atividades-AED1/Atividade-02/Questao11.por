/*
 *###################################################
 *Instituição: IFMG- BAMBUI
 *Nome: Daniel Reis Goncalves Sant'ana
 *Turma: ENGC-2022
 *Titulo: Atividade 11 da Lista 02
 *###################################################
*/
programa
{
	
	funcao inicio()
	{
		inteiro numero1 = 0,numero2 = 0,numero3 = 0 
		
		escreva("Digite tres numeros iteiro diferentes de si!\n")
		escreva("Digite o primeiro numero: ")
		leia(numero1)

		escreva("Digite o segundo numero: ")
		leia(numero2)

		enquanto(numero2==numero1)
		{
			escreva("\nO seugundo numero nao pode ser igual ao primeiro!\n")
			escreva("Digite o segundo numero novamente: ")
			leia(numero2)
			escreva("\n")
		}

		escreva("Digite o terceiro numero: ")
		leia(numero3)

		enquanto(numero3==numero1 ou numero3==numero2)
		{
			escreva("\nO terceiro numero nao pode ser igual ao primeiro nem ao segundo numero!\n")
			escreva("Digite o terceiro numero novamente: ")
			leia(numero3)
		}

		se(numero1>numero2 e numero1>numero3)
		{
			escreva("\nO maior numero digitado foi: ",numero1,"\n")
		}
		senao se(numero2>numero1 e numero2>numero3)
		{
			escreva("\nO maior numero digitado foi: ",numero2,"\n")
		}
		senao
		{
			escreva("\nO maior numero digitado foi: ",numero3,"\n")
		}
	}
}