/*
 *###################################################
 *Instituição: IFMG- BAMBUI
 *Nome: Daniel Reis Goncalves Sant'ana
 *Turma: ENGC-2022
 *Titulo: Atividade 12 da Lista 02
 *###################################################
*/
programa
{
	
	funcao inicio()
	{
		cadeia cidade,idaevolta

		escreva("Bem vindo a rodoviaria de Bambui\n")
		escreva("\n")
		escreva("*******************************************************************************************")
		escreva("\nCidade de Destino:	Código da Cidade:	Preço somente IDA:	Preço IDA e VOLTA:\n")
		escreva("    Araxá                     ARA                    R$ 100,00               R$ 180,0\n")
		escreva("  Belo Horizonte              BH                     R$ 150,00               R$ 250,00\n")
		escreva("    Formiga                   FGA                    R$ 30,00                R$ 50,00\n")
		escreva("   Uberlândia                 UBA                    R$ 200,00               R$ 370,00\n")
		escreva("*******************************************************************************************\n")
		escreva("\n")
		escreva("PARA ESTE ALGORITIMO USAREMOS APENAS ENTRADAS EM LETRAS MAIUSCULAS.\n")
		escreva("\nDigite o codigo da cidade para o qual deseja ir: ")
		leia(cidade)
		
		enquanto(cidade!="ARA" e cidade!="BH" e cidade!="FGA" e cidade!="UBA")
		{
			escreva("\nPor favor digite um codigo valido em letras MAIUSCULAS!\n")
			escreva("Digite o codigo da cidade para qual deseja ir: ")
			leia(cidade)
			escreva("\n")
			
		}
		
		escreva("Deseja passagem de ida de volta? SIM ou NAO: ")
		leia(idaevolta)
		
		enquanto(idaevolta!="SIM" e idaevolta !="NAO")
		{
			escreva("\nPor favor digite um valor valido com letras MAIUSCULAS!\n")
			escreva("Deseja passagem de ida e volta? SIM ou NAO: ")
			leia(idaevolta)
			escreva("\n")
		}

		se(cidade=="ARA" e idaevolta=="NAO")
		{
			escreva("\nO preço da sua passagem vai ficar em: R$ 100,00\n")
		}
		senao se(cidade=="ARA" e idaevolta=="SIM")
		{
			escreva("\nO preço da sua passagem vai ficar em: R$ 180,0\n")
		}
		senao se(cidade=="BH" e idaevolta=="NAO")
		{
			escreva("\nO preço da sua passagem vai ficar em: R$ 150,00\n")
		}
		senao se(cidade=="BH" e idaevolta=="SIM")
		{
			escreva("\nO preço da sua passagem vai ficar em: R$ 250,00\n")
		}
		senao se(cidade=="FGA" e idaevolta=="NAO")
		{
			escreva("\nO preço da sua passagem vai ficar em: R$ 30,00\n")
		}
		senao se(cidade=="FGA" e idaevolta=="SIM")
		{
			escreva("\nO preço da sua passagem vai ficar em: R$ 50,00\n")
		}
		senao se(cidade=="UBA" e idaevolta=="NAO")
		{
			escreva("\nO preço da sua passagem vai ficar em: R$ 200,00\n")
		}
		senao se(cidade=="UBA" e idaevolta=="SIM")
		{
			escreva("\nO preço da sua passagem vai ficar em: R$ 370,00\n")
		}
	}
}