/*
 *###################################################
 *Nome: Daniel Reis Goncalves Sant'ana
 *Data: 02/08/2022
 *Turma: ENGC-2022
 *Titulo: Questao 09 - Atividade 04
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

    float matA[3][4],matB[3][4],matC[3][4],matSoma[3][4],matMulti[3][4],matSub[3][4]; //A+B A-B A*C

    //i=Linha j=Coluna
    //Alimentando as matrizes:
    for(int i=0;i<3;i++){
        for(int j=0;j<4;j++){
            cout << "Digite o "<<j+1<<"º numero da " << i+1 << "º linha da matriz A: ";
            cin >> matA[i][j];
        }
    }
    cout << endl;
    for(int i=0;i<3;i++){
        for(int j=0;j<4;j++){
            cout << "Digite o "<<j+1<<"º numero da " << i+1 << "º linha da matriz B: ";
            cin >> matB[i][j];
        }
    }
    cout << endl;
    for(int i=0;i<3;i++){
        for(int j=0;j<4;j++){
            cout << "Digite o "<<j+1<<"º numero da " << i+1 << "º linha da matriz C: ";
            cin >> matC[i][j];
        }
    }

    //Processamento e print:

    cout << "Resultado da Soma dos valores de A com B: " << endl;
    for(int i=0;i<3;i++){
        for(int j=0;j<4;j++){
            matSoma[i][j]=matA[i][j]+matB[i][j];
            cout << matSoma[i][j] << " ";
        }
        cout << "\n";
    }
    cout << "Resultado da Subtração dos valores de A com B: " << endl;
    for(int i=0;i<3;i++){
        for(int j=0;j<4;j++){
            matSub[i][j]=matA[i][j]-matB[i][j];
            cout << matSub[i][j] << " ";
        }
        cout << "\n";
    }
    cout << "Resultado da Multiplicação dos valores de A com C: " << endl;
    for(int i=0;i<3;i++){
        for(int j=0;j<4;j++){
            matMulti[i][j]=matA[i][j]*matC[i][j];
            cout << matMulti[i][j] << " ";
        }
        cout << "\n";
    }


    cout << endl;
    system ("pause");
    return 0;
}
