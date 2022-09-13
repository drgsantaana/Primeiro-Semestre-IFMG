/*
 *###################################################
 *Nome: Daniel Reis Goncalves Sant'ana
 *Data: 01/08/2022
 *Turma: ENGC-2022
 *Titulo: Questao 08 - Atividade 04
 *###################################################
*/
#include <iostream>
#include <stdlib.h>
#include <clocale>

using namespace std;
//VARIAVEIS GLOBAIS:



//FUNÇOES:

void media(int v[], int tam){

    float m=0;

    for(int i=0;i<tam;i++){
        m = m+v[i];
    }
    m=m/tam;
    cout << "A media das idades é: " << m << endl;
}

void sexos(string v[],int tam){
    int m=0,f=0;

    for(int i=0;i<tam;i++){
      if(v[i]=="M"){
        m++;
      }
      else{
        f++;
      }
    }
    cout << m << " pessoas sao do sexo masculino e " << f << " pessoas sao do sexo feminino" << endl;

}

void dados(string n[],int id[], string s[],string nome,int tam){
    int aux=0;
    for(int i=0;i<tam;i++){
        if(n[i]==nome){
            cout << "O " << n[i] << " esta na " << i+1 << "º posição do vetor, tem " << id[i] << " anos e pertence ao sexo " << s[i] << endl;
            aux++;
        }
        }
    if(aux==0){
        cout << "Nome não encontrado!" << endl;
    }

}

void masculinos(string n[], string s[],int tam){
    int aux=0;
    for(int i=0;i<tam;i++){
        if(s[i]=="M"){
            cout << "O " << n[i] << " é do sexo masculino." << endl;
            aux++;
        }
        }
    if(aux==0){
        cout << "Não foram encontradas pessoas do sexo masculino." << endl;
    }

}




//BLOCO PRINCIPAL:

int main() {
    setlocale(LC_ALL, "Portuguese");
    string nomes[10],nome,sexo[10];
    int idade[10],maior=0,menor=0;

    for(int i=0;i<10;i++){
        cout << "Digite o nome da " << i+1 << "º pessoa: ";
        cin >> nomes[i];

        cout << "Digite o sexo da " << i+1 << "º pessoa(M ou F): ";//tentei fazer correção de erro e nao consegui, digita certin pf adjklgdg
        cin >> sexo[i];

        cout << "Digite a idade da " << i+1 << "º pessoa: ";
        cin >> idade[i];
        if(idade[i]>=idade[maior])
        {
            maior=i;
        }
        if(idade[i]<=idade[menor])
        {
            menor=i;
        }
    }

    media(idade,10);
    sexos(sexo,10);

    cout << "Digite o nome que deseja ter os dados: ";
    cin >> nome;
    dados(nomes,idade,sexo,nome,10);
    masculinos(nomes,sexo,10);

    cout << "O " << nomes[maior] << " é o mais velho, tem " << idade[maior] << " anos e pertence ao sexo " << sexo[maior] << "." << endl;
    cout << "O " << nomes[menor] << " é o mais novo, tem " << idade[menor] << " anos e pertence ao sexo " << sexo[menor] << "." << endl;



    cout << endl;
    system ("pause");
    return 0;
}
