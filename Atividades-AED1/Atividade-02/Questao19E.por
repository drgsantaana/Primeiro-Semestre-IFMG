/*
 *###################################################
 *Instituição: IFMG- BAMBUI
 *Nome: Daniel Reis Goncalves Sant'ana
 *Turma: ENGC-2022
 *Titulo: Atividade 19 da Lista 02
 *###################################################
*/
programa
{
	funcao inicio()
	{
		inteiro contador=0,masculino=0
		cadeia sexo=""
		escreva("Para finalizar o algortimo digite: FIM\n")

		enquanto(sexo!="FIM")
		{
			escreva("\nInforme o ",contador+1,"º sexo(M ou F): ")
			leia(sexo)
			enquanto((sexo!="FIM")e(sexo!="M")e(sexo!="F"))
			{
				escreva("\nInforme um sexo valido\n")
				escreva("Informe o ",contador+1,"º sexo(M ou F): ")
				leia(sexo)
			}
			se(sexo=="M")
			{
				masculino=masculino+1
			}
			contador=contador+1	
		}
			escreva("\n",masculino," pessoas são do sexo masculino.\n")
	}
}