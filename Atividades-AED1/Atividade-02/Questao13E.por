/*
 *###################################################
 *Instituição: IFMG- BAMBUI
 *Nome: Daniel Reis Goncalves Sant'ana
 *Turma: ENGC-2022
 *Titulo: Atividade 13 da Lista 02
 *###################################################
*/
programa
{
	
	funcao inicio()
	{
		inteiro contador=0
		real fahrenheit
		//contator = graus celcius
		//°F = °C × 1.8 + 32
		enquanto(contador<=100)
		{
			fahrenheit = contador*1.8+32

			escreva("\n",contador,"°C é equivalemte a ",fahrenheit,"°F")

			contador=contador+1
		}
		escreva("\n")
		
	}
}