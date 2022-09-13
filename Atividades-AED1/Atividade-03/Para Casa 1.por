/*
 *###################################################
 *Instituição: IFMG- BAMBUI
 *Nome: Daniel Reis Goncalves Sant'ana
 *Turma: ENGC-2022
 *Titulo: Atividade 01 Para Casa
 *###################################################
*/

/*PARA CASA 1: modifique o algoritmos de modo que agora ele também seja capaz de:
 * 	a) mostrar todas as notas cadastradas para cada aluno. Ex:
 * 		Aluno: Fulano
 * 		Notas: 
 * 			8
 * 			7.5
 * 			9
 * 			6
 * 			10
 * 		Aluno: ...
 * 	b) calcular e mostrar a média GERAL da turma
 */
programa
{
	
	funcao inicio()
	{
		cadeia vetNomes[4]
		real matNotas[4][6],somaN,mediaG=0.0
		const inteiro consMedia=5,consAlunos=4
		inteiro cL,cC


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

		
		para(cL=0;cL<consAlunos;cL+=1)
		{
			somaN=0.0
			escreva("\nAluno: ",vetNomes[cL])
			escreva("\nNotas:\n")
			para(cC=0;cC<consMedia;cC+=1)
			{
				somaN=somaN+matNotas[cL][cC]
				escreva(matNotas[cL][cC],"\n")
				
			}
			matNotas[cL][consMedia]=somaN/consMedia
			mediaG=mediaG+matNotas[cL][consMedia]
			escreva("A media do(a) aluno(a) ",vetNomes[cL]," é: ",matNotas[cL][consMedia],"\n")
		}
		mediaG=mediaG/consAlunos
		escreva("\nA media geral da turma é: ",mediaG,"\n")
	}
}