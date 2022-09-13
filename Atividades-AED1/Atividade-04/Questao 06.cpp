/*
 *###################################################
 *Nome: Daniel Reis Goncalves Sant'ana
 *Data: 29/07/2022
 *Turma: ENGC-2022
 *Titulo: Questao 06 - Atividade 04
 *###################################################
*/
#include <iostream>
#include <stdlib.h>
#include <clocale>

using namespace std;
//VARIAVEIS GLOBAIS:

char vetOriginal[8];

//FUNÇOES:

void inverte(char v[], int ini, int fim){
    char aux;
    if(ini < fim){
        aux = v[ini];
        v[ini] = v[fim];
        v[fim] = aux;
        inverte(v, ini + 1, fim - 1);
    }
}

void imprimir(char v[], int tam){
    if(tam == 1)
        cout << v[tam - 1] << " ";
    else{
        imprimir(v, tam - 1);
        cout << v[tam - 1] << " ";
        //imprimir(v, tam - 1); // IMPRIME ELE AO CONTRARIO
    }

}
//BLOCO PRINCIPAL:

int main() {
    setlocale(LC_ALL, "Portuguese");

    cout << "Digite 8 letras do alfabeto diferentes: " << endl;
    for(int i=0;i<8;i++){
        cout << "Digite a " << i+1 << "º letra:";
        cin >> vetOriginal[i];

    }

    cout << "vetOriginal:" << endl;
    imprimir(vetOriginal,8);
    inverte(vetOriginal,0,7);
    cout << "\nvetOriginal invertido:" << endl;
    imprimir(vetOriginal,8);


    cout << endl;
    system ("pause");
    return 0;
}
