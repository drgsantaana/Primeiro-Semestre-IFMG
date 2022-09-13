/*
 *###################################################
 *Instituição: IFMG- BAMBUI
 *Nome: Daniel Reis Goncalves Sant'ana
 *Turma: ENGC-2022
 *Titulo: Atividade 02 Para Casa
 *###################################################
*/

/* PARA CASA 2: modifique o algoritmos de modo que agora ele também seja capaz de:
 * 	a) mostrar o nome do aluno que teve a maior média e o valor da sua média
 * 	b) mostrar qual foi a menor nota na disciplina 2 e o nome do aluno que a tirou
 * 
 */

programa
{
	
	funcao inicio()
	{
		cadeia vetNomes[4]
		real matNotas[4][6],somaN
		const inteiro consMedia=5,consAlunos=4,consDisciplina=1
		inteiro cL,cC,menorN=0,maiorM=0


		para(cL=0;cL<consAlunos;cL+=1)
		{
			escreva("\nDigite o nome do ",cL+1,"º aluno: ")
			leia(vetNomes[cL])
			para(cC=0;cC<consMedia;cC+=1)
			{
				escreva("Digite a nota da disciplina ",cC+1,": ")
				leia(matNotas[cL][cC])
			}
		}

		escreva("\n")
		
		para(cL=0;cL<consAlunos;cL+=1)
		{
			somaN=0.0
			para(cC=0;cC<consMedia;cC+=1)
			{
				somaN=somaN+matNotas[cL][cC]
			}
			matNotas[cL][consMedia]=somaN/consMedia
			escreva("A media do(a) aluno(a) ",vetNomes[cL]," é: ",matNotas[cL][consMedia],"\n")
		}

		para(cL=0;cL<consAlunos;cL+=1)
		{

			se(matNotas[cL][consMedia]>=matNotas[maiorM][consMedia])
			{
				maiorM=cL
			}

			senao se(matNotas[cL][consDisciplina]<=matNotas[cL][menorN])
			{
				menorN=cL
			}
		}
		escreva("\nO aluno com a maior media foi o(a) ",vetNomes[maiorM]," e tirou ",matNotas[maiorM][consMedia],"\n")
		escreva("\nO aluno com a menor nota da disciplina 2 foi o(a) ",vetNomes[menorN]," e tirou ",matNotas[menorN][consDisciplina],"\n")

	}
}