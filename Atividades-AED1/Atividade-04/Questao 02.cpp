/*
 *###################################################
 *Nome: Daniel Reis Goncalves Sant'ana
 *Data: 27/07/2022
 *Turma: ENGC-2022
 *Titulo: Questao 02 - Atividade 04
 *###################################################
*/
#include <iostream>
#include <stdlib.h>
#include <clocale>
using namespace std;

//VARIAVEIS GLOBAIS:



//FUNÇOES:



//BLOCO PRINCIPAL:

int main(){
    setlocale(LC_ALL, "Portuguese");
    float vetNum[20];
    int num=0, aux, simnao;

    for(int i=0;i<20;i++)
    {

        cout << "Escreva o "<<i+1<<" numero: ";
        cin >> vetNum[i];

        if(vetNum[i]>=100 and vetNum[i]<=200)
        {
            num++;
        }

    }

    cout << "Voce digitou "<<num<<" numeros entre 100 e 200."<<endl;

    do{
        cout << "Gostaria de verificar alguma casa do vetor(1 para Sim / 0 para Nao): ";
        cin >> simnao;
        if(simnao==1)
        {
            cout << "Digite qual casa do vetor gostaria de verificar: ";
            cin >> aux;
            if(vetNum[aux-1]==0)
            {
                cout << "Nenhum valor valido foi inserido" << endl;
            }
            else
            {
                cout << "Voce digitou o valor " << vetNum[aux-1] << " na posicao " << aux << " do vetor." <<endl;
            }

        }
    }while(simnao!=0);

    cout << endl;
    system("pause");
    return 0;
}
