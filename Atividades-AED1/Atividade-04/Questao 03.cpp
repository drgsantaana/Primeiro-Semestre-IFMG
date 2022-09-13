/*
 *###################################################
 *Nome: Daniel Reis Goncalves Sant'ana
 *Data: 28/07/2022
 *Turma: ENGC-2022
 *Titulo: Questao 03 - Atividade 04
 *###################################################
*/
#include <iostream>
#include <stdlib.h>
#include <clocale>

using namespace std;

//VARIAVEIS GLOBAIS:

float vetNum1[5],vetNum2[5],vetNum3[5],vetNum4[5],vetNum5[5];

//FUNÇOES:


void multi(){

     for(int i=0;i<5;i++){
        vetNum3[i]=vetNum1[i]*vetNum2[i];
     }

}

void soma(){

      for(int i=0;i<5;i++){
        vetNum4[i]=vetNum1[i]+vetNum2[i];
     }

}

void inverte(){

    for(int i=0,j=4;i<5 and j>=0;i++,--j){
        vetNum5[j]=vetNum1[i];
    }


}

void imprimir(float v[], int tam){
    if(tam == 1)
        cout << v[tam - 1] << " ";
    else{
        imprimir(v, tam - 1);
        cout << v[tam - 1] << " ";
    }
}

//BLOCO PRINCIPAL:

int main() {
    setlocale(LC_ALL, "Portuguese");

    cout << "Escrevá os 5 numeros do 1º vetor:" << endl;

    for(int i=0;i<5;i++)
    {
        cout << "Escreva o " << i+1 << "º numero:";
        cin >> vetNum1[i];
    }

    cout << "Escreva os 5 numeros do 2º vetor:" << endl;

    for(int i=0;i<5;i++)
    {
        cout << "Escreva o " << i+1 << "º numero:";
        cin >> vetNum2[i];
    }

    multi();
    soma();
    inverte();

    cout << "Valores dentro do vetNum1: " << endl;
    imprimir(vetNum1,5);
    cout << endl;
    cout << "Valores dentro do vetNum2: " << endl;
    imprimir(vetNum2,5);
    cout << endl;
    cout << "Valores dentro do vetNum3(Multiplicação): " << endl;
    imprimir(vetNum3,5);
    cout << endl;
    cout << "Valores dentro do vetNum4(Soma): " << endl;
    imprimir(vetNum4,5);
    cout << endl;
    cout << "Valores dentro do vetNum5(Vetor 1 invetido): " << endl;
    imprimir(vetNum5,5);





    cout << endl;
    system ("pause");
    return 0;
}
