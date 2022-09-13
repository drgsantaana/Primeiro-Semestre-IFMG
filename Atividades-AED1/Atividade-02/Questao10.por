/*
 *###################################################
 *Instituição: IFMG- BAMBUI
 *Nome: Daniel Reis Goncalves Sant'ana
 *Turma: ENGC-2022
 *Titulo: Atividade 10 da Lista 02
 *###################################################
*/
programa
{

	funcao inicio()
	{
		real numero1,numero2
		
		escreva("Neste algoritimo usamos '.' para separar numeros reais\n")
		escreva("Digite o primeiro numero: ")
		leia(numero1)

		escreva("Digite o segundo numero: ")
		leia(numero2)

		se(numero1>numero2)
		{
			escreva("Os numeros em ordem crescente ficam: ",numero1,", ",numero2)
		}
		senao
		{
			escreva("Os numeros em ordem crescente ficam: ",numero2,", ",numero1)
		}
	}
}