/*
 *###################################################
 *Instituição: IFMG- BAMBUI
 *Nome: Daniel Reis Goncalves Sant'ana
 *Turma: ENGC-2022
 *Titulo: Atividade 21 da Lista 02
 *###################################################
*/
programa
{
	
	funcao inicio()
	{
		inteiro paisA=5000000,paisB=7000000,contador

		para(contador=0;contador<14;contador+=1)
		{
			paisA=(paisA*0.03)+paisA
			paisB=(paisB*0.02)+paisB
		}
		escreva("Apos 14 anos o pais A ficara com: ",paisA,"\n")
		escreva("Apos 14 anos o pais B ficara com: ",paisB,"\n")
	}
}