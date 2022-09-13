/*
 *###################################################
 *Instituição: IFMG- BAMBUI
 *Nome: Daniel Reis Goncalves Sant'ana
 *Turma: ENGC-2022
 *Titulo: Atividade 18 da Lista 02
 *###################################################
*/
programa
{
	
	funcao inicio()
	{
		caracter sexo[15]
		inteiro contador,masculino=0,feminino=0

		escreva("Neste algoritimo consideraremos apenas letras MAIUSCULAS\n\n")
		para(contador=0;contador<=14;contador+=1)
		{
			escreva("Digite o sexo(M ou F) da ",contador+1,"º pessoa: ")
			leia(sexo[contador])
			enquanto((sexo[contador]!='M') e (sexo[contador]!='F'))
			{
				escreva("Digite um sexo(M ou F) valido para a ",contador+1,"º pessoa: ")
				leia(sexo[contador])
			}
			se(sexo[contador]=='M')
			{
				masculino=masculino+1
			}
			senao
			{
				feminino=feminino+1
			}
		}
		escreva("\nDe 15 pessoas ",masculino," sao Homens e ",feminino," sao Mulheres.\n")
	}
}