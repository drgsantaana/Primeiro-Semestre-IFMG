/*
 *###################################################
 *Nome: Daniel Reis Goncalves Sant'ana
 *Data: 28/07/2022
 *Turma: ENGC-2022
 *Titulo: Questao 04 - Atividade 04
 *###################################################
*/
#include <iostream>
#include <stdlib.h>
#include <clocale>

using namespace std;
//VARIAVEIS GLOBAIS:



//FUN�OES:



//BLOCO PRINCIPAL:

int main() {
    setlocale(LC_ALL, "Portuguese");

    int vetNum[10],x,y,soma;

    cout << "Digite os 10 numeros do vetor:" << endl;
    for(int i=0;i<10;i++){
        cout << "Digite o " << i+1 << "� numero:";
        cin >> vetNum[i];
    }
    cout << "Digite a primeira posi��o do vetor(1 a 10): ";
    cin >> x;
    cout << "Digite a segunda posi��o do vetor(1 a 10): ";
    cin >> y;

    soma=vetNum[x-1]+vetNum[y-1];

    cout << "A soma dos numeros " << vetNum[x-1] << " e " << vetNum[y-1] << " � igual a: " << soma << endl;

    cout << endl;
    system ("pause");
    return 0;
}
