/*
 *###################################################
 *Instituição: IFMG- BAMBUI
 *Nome: Daniel Reis Goncalves Sant'ana
 *Turma: ENGC-2022
 *Titulo: Atividade 17 da Lista 02
 *###################################################
*/
programa
{
	
	funcao inicio()
	{
		cadeia profissoes[30]
		inteiro contador,dentistas=0

		para(contador=0; contador<=29; contador+=1)
		{
			escreva("Digite a ",contador+1,"º profissao: ")
			leia(profissoes[contador])

			se((profissoes[contador]=="Dentista") ou (profissoes[contador]=="dentista") ou (profissoes[contador]=="DENTISTA"))
			{
				dentistas=dentistas+1
			}
		}
		escreva("\nDas 30 pessoas ",dentistas," são Dentistas")
		
	}
}