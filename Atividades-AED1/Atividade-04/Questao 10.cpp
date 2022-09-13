/*
 *###################################################
 *Nome: Daniel Reis Goncalves Sant'ana
 *Data: 02/08/2022
 *Turma: ENGC-2022
 *Titulo: Questao 10 - Atividade 04
 *###################################################
*/
#include <iostream>
#include <stdlib.h>
#include <clocale>

using namespace std;
//VARIAVEIS GLOBAIS:



//FUNÇOES:

void imprimir(float m[][4],int tam){
    for(int i=0;i<tam;i++){
        for(int j=0;j<tam;j++){
            cout << m[i][j] << " ";
        }
        cout << "\n";
    }

}

void somalinha(float m[][4],int linha,int tam){
    float soma=0;
    for(int i=0;i<tam;i++){
        soma=soma+m[linha-1][i];
    }
    cout <<"A soma da "<< linha << "º linha é igual a: "<< soma << endl;

}

void somacoluna(float m[][4], int coluna, int tam){
    float soma=0;
    for(int i=0;i<tam;i++){
        soma=soma+m[i][coluna-1];
    }
    cout <<"A soma da "<< coluna << "º coluna é igual a: "<< soma << endl;
}

void somadiagonal(float m[][4], int tam){
    float soma=0;
    for(int i=0;i<tam;i++){
        for(int j=0;j<tam;j++){
            if(j>i){
                soma=soma+m[i][j];
            }
        }
    }
    cout << "A soma dos numeros acima da diagonal principal resultam em: " << soma << endl;

}
//BLOCO PRINCIPAL:

int main() {
    setlocale(LC_ALL, "Portuguese");

    float matA[4][4],valor,somatotal=0;
    int x,y;

    for(int i=0;i<4;i++){
        for(int j=0;j<4;j++){
            cout << "Digite o "<<j+1<<"º numero da " << i+1 << "º linha da matriz A: ";
            cin >> matA[i][j];
        }
    }
    cout << endl << endl;
    imprimir(matA,4);
    cout << endl << endl;
    somalinha(matA,1,4);
    somacoluna(matA,3,4);
    cout << endl;

    cout << "Digite um valor digitado na Matriz A: ";
    cin >> valor;
    cout << endl;

    for(int i=0;i<4;i++){
        for(int j=0;j<4;j++){
            if(matA[i][j]==valor){
            cout << "O valor " << valor << " foi encontrado na linha "<< i+1 << " coluna "<< j+1 << endl;
            }
        }
    }
    cout << endl;
    cout << "Digite as coordenadas X e Y da matriz(1 a 4): " <<endl;
    cout << "Digite o X: ";
    cin >> x;
    cout << "Digite o Y: ";
    cin >> y;

    cout << "O numero salvo na coordenada (" << x << "," << y << ") é: " << matA[x-1][y-1] << endl;

    cout<<endl;
    cout << "Elementos acima da diagonal principal: " << endl;
    for(int i=0;i<4;i++){
        for(int j=0;j<4;j++){
            if(j>i){
                cout<<matA[i][j]<< " ";
            }
        }
    }
    cout << endl;
    somadiagonal(matA,4);
    cout<<endl;
    cout<< "Os numeros que formam a diagonal principal são: "<< endl;
    for(int i=0;i<4;i++){
        for(int j=0;j<4;j++){
            if(i==j){
                cout<< matA[i][j] << " ";
            }
        }
     }
     cout<< endl <<"Os numeros que formam a diagonal secundaria são: " << endl;
     for(int i=0;i<4;i++){
            cout<< matA[i][4-1-i] << " ";
    }
    cout<< endl;
    for(int i=0;i<4;i++){
        for(int j=0;j<4;j++){
            somatotal=somatotal+matA[i][j];
        }
    }
    cout <<endl<< "A soma de todos os indices da matriz é igual a: " << somatotal<< endl;



    cout << endl;
    system ("pause");
    return 0;
}
