/*
 *###################################################
 *Nome: Daniel Reis Goncalves Sant'ana
 *Data: 02/08/2022
 *Turma: ENGC-2022
 *Titulo: Questao 12 - Atividade 04
 *###################################################
*/
#include <iostream>
#include <stdlib.h>
#include <clocale>

using namespace std;
//VARIAVEIS GLOBAIS:



//FUNÇOES:



//BLOCO PRINCIPAL:

int main() {
    setlocale(LC_ALL, "Portuguese");

    int matA[2][7],menor=0,maior=0,mediaminima=0,mediamaxima=0;

    for(int i=0;i<2;i++){
        if(i==0){
            cout << "Digite as minimas temperaturas dos dias da semana em ordem: " <<endl;
        }
        else{
            cout << "Digite as maximas temperaturas dos dias da semana em ordem: " <<endl;
        }
        for(int j=0;j<7;j++){
            cout << "Digite o " << j+1 << "º dia da semana: ";
            cin >> matA[i][j];
            if(i==0){
                mediaminima=mediaminima+matA[i][j];
            }
            if(i==1){
                mediamaxima=mediamaxima+matA[i][j];
            }
            if(matA[1][j]>=matA[1][maior])
            {
                maior=j;
            }
            if(matA[0][j]<=matA[0][menor])
            {
                menor=j;
            }
        }
    }
    mediamaxima=mediamaxima/7;
    mediaminima=mediaminima/7;

    cout << "Dias  |S|T|Q|Q|S|S|D|"<< endl;
    for(int i=0;i<2;i++){
        if(i==0){
            cout << "Minima|";
        }
        else{
            cout << "Maxima|";
        }
        for(int j=0;j<7;j++){
            cout << matA[i][j] << "|";
        }
        cout<<endl;
    }

    cout << "A media minima de temperatura é: "<< mediaminima <<endl;
    cout << "A media maxima de temperatura é: "<< mediamaxima <<endl;

    switch(maior){
    case 0:
        cout<< "O dia com maior maxima de temperatura foi Segunda.";
        break;
    case 1:
        cout<< "O dia com maior maxima de temperatura foi Terça.";
        break;
    case 2:
        cout<< "O dia com maior maxima de temperatura foi Quarta.";
        break;
    case 3:
        cout<< "O dia com maior maxima de temperatura foi Quinta.";
        break;
    case 4:
        cout<< "O dia com maior maxima de temperatura foi Sexta.";
        break;
    case 5:
        cout<< "O dia com maior maxima de temperatura foi Sabado.";
        break;
    case 6:
        cout<< "O dia com maior maxima de temperatura foi Domingo.";
        break;


    }
    cout<<endl;
        switch(menor){
    case 0:
        cout<< "O dia com menor minima de temperatura foi Segunda.";
        break;
    case 1:
        cout<< "O dia com menor minima de temperatura foi Terça.";
        break;
    case 2:
        cout<< "O dia com menor minima de temperatura foi Quarta.";
        break;
    case 3:
        cout<< "O dia com menor minima de temperatura foi Quinta.";
        break;
    case 4:
        cout<< "O dia com menor minima de temperatura foi Sexta.";
        break;
    case 5:
        cout<< "O dia com menor minima de temperatura foi Sabado.";
        break;
    case 6:
        cout<< "O dia com menor minima de temperatura foi Domingo.";
        break;


    }






    cout << endl;
    system ("pause");
    return 0;
}
