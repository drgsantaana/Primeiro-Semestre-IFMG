/*
 *###################################################
 *Nome: Daniel Reis Goncalves Sant'ana
 *Data: 01/08/2022
 *Turma: ENGC-2022
 *Titulo: Questao 07 - Atividade 04
 *###################################################
*/
#include <iostream>
#include <stdlib.h>
#include <clocale>

using namespace std;
//VARIAVEIS GLOBAIS:



//FUN�OES:

void verifica(string v[], string nome,int tam){
    int aux=0;
    for(int i=0;i<tam;i++){
        if(v[i]==nome){
            cout << "O nome " << nome << " esta na posi��o " << i+1 << " do vetor." << endl;
            aux++;
        }
        }
    if(aux==0){
        cout << "Nome n�o encontrado!" << endl;
    }

}

//BLOCO PRINCIPAL:

int main() {
    setlocale(LC_ALL, "Portuguese");

    string vetNomes[10],nome;
    int indice;
    for(int i=0;i<10;i++){
        cout << "Digite o " << i+1 << "� nome: ";
        cin >> vetNomes[i];
    }

    cout << "Digite o nome que deseja saber a posi��o no vetor: ";
    cin >> nome;
    verifica(vetNomes,nome,10);
    cout << "Digite a posi��o do vetor que deseja saber o nome: ";
    cin >> indice;
    while(indice<1 or indice>10){
        cout << "Digite uma posi��o do vetor valida(1 a 10): ";
        cin >> indice;
    }
    cout << "Na posi��o " << indice << " esta salvo o nome " << vetNomes[indice-1];

    cout << endl;
    system ("pause");
    return 0;
}
