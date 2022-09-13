/*
 *###################################################
 *Instituição: IFMG- BAMBUI
 *Nome: Daniel Reis Goncalves Sant'ana
 *Turma: ENGC-2022
 *Titulo: Atividade 20 da Lista 02
 *###################################################
*/
programa
{
	
	funcao inicio()
	{
		caracter sexo[15]
		inteiro contador=0
		real masculino=0.0,feminino=0.0

		escreva("Neste algoritimo consideraremos apenas letras MAIUSCULAS\n\n")
		enquanto(contador<=14)
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
			contador=contador+1
		}
		masculino=(masculino/15)*100
		feminino=(feminino/15)*100
		escreva("\nDe 15 pessoas ",masculino,"% sao do sexo Masculino e ",feminino,"% sao do sexo Feminino.\n")
	}
}