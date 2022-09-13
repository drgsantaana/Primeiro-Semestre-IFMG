/*
 *###################################################
 *Nome: Daniel Reis Goncalves Sant'ana
 *Data: 27/07/2022
 *Turma: ENGC-2022
 *Titulo: Questao 01 - Atividade 04
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
    int num=0;

    for(int i=0;i<20;i++){

        cout << "Escreva o "<<i+1<<" numero: ";
        cin >> vetNum[i];

        if(vetNum[i]>=100 and vetNum[i]<=200){
            num++;
        }

    }

    cout << "Voce digitou "<<num<<" numeros entre 100 e 200."<<endl;

    cout << endl;
    system("pause");
    return 0;
}
