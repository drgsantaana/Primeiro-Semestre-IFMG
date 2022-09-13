/*
 *###################################################
 *Nome: Daniel Reis Goncalves Sant'ana
 *Data: 02/08/2022
 *Turma: ENGC-2022
 *Titulo: Questao 11 - Atividade 04
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

    string vetNome[10],nome;
    float matNotas[10][5],mediageral=0,vetDis[5],acumulador=0,vetMediaalunos[10],acumulador2;

    for(int i=0;i<10;i++){
        cout<< "Digite o nome do aluno: ";
        cin >> vetNome[i];
        for(int j=0;j<5;j++){
            cout << "Digite as notas do aluno: ";
            cin >> matNotas[i][j];
            mediageral=mediageral+matNotas[i][j];
            acumulador=acumulador+matNotas[i][j];
            acumulador2=acumulador2+matNotas[i][j];

        }
        vetMediaalunos[i]=acumulador2/5;
        acumulador2=0;
        if(i<5){
            vetDis[i]=acumulador/10;
        }
        acumulador=0;
    }
    mediageral=mediageral/10;
    cout << "A media geral da turma é igual a: "<< mediageral << endl;

    cout << endl << "A media em cada disciplica foi de: " <<endl;
    for(int i=0;i<5;i++){
        cout << vetDis[i] << " ";
    }

    cout << endl << "A media de cada aluno foi de: " << endl;
    for(int i=0;i<10;i++){
        cout << vetNome[i] << " teve a media de: " << vetMediaalunos[i] << endl;
    }
        cout << endl<< "Digite o nome de um aluno: ";
        cin >> nome;
    for(int i=0;i<10;i++){
        if(vetNome[i]==nome){
            cout << "o(a) " << vetNome[i] << " tirou as respectivas notas: ";
            for(int j=0;j<5;j++){
                cout << matNotas[i][j] << " ";
            }
            cout<<endl;
        }
    }


    cout << endl;
    system ("pause");
    return 0;
}
