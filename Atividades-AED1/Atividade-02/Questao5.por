/*
 *###################################################
 *Instituição: IFMG- BAMBUI
 *Nome: Daniel Reis Goncalves Sant'ana
 *Turma: ENGC-2022
 *Titulo: Atividade 05 da Lista 02
 *###################################################
*/
programa
{
	
	funcao inicio()
	{
		real altura,peso
		caracter sexo
		
		escreva("Neste algoritimo usamos '.' para numeros reais \n")
		escreva("Digite a sua altura: ")
		leia(altura)

		escreva("Qual seu sexo? (Digite M para Masculino e F para Feminino) :")
		leia(sexo)

		se (sexo=='m' ou sexo=='M')
		{
			peso= (72.7*altura)-58
			escreva("\nSeu peso ideial é: ",peso,"Kg\n")
		}
		senao se (sexo=='f' ou sexo=='F')
		{
			peso= (62.1*altura)-44.7
			escreva("\nSeu peso ideial é: ",peso,"Kg\n")
		}
		senao
		{
			escreva("\nSexo invalido")
		}
	}
}