/*
 *###################################################
 *Nome: Daniel Reis Goncalves Sant'ana
 *Data: 14/08/2022
 *Turma: ENGC-2022
 *Titulo: Questao 12 - Atividade 05
 *###################################################
*/
#include <iostream>
#include <stdlib.h>
#include <clocale>
#define tam 3   //Mude o valor de tam para facilitar o preenchimento dos dados

//VARIAVEIS GLOBAIS:



//FUNÇOES:

float mediaidade(int v[]){
    float media=0;

    for(int i=0;i<tam;i++){
        media=media+v[i];
    }
    media=media/tam;
    return media;
}

int sexo(char v[]){
    int m=0;
    for(int i=0;i<tam;i++){
        if(v[i]=='m' || v[i]=='M'){
            m++;
        }
    }
    return m;
}

void dados(std::string nome,std::string n[],int id[],char s[]){
    int cont=0;
    for(int i=0;i<tam;i++){
        if(nome==n[i]){
            std::cout << "O(a) " << n[i] << " tem " << id[i] << " anos e pertence ao sexo " << s[i] << std::endl;
            cont++;
        }
    }
    if(cont==0){
        std::cout << "Nenhum nome valido foi inserido" << std::endl;
    }



}

void masculinos(char v[],std::string n[]){

    for(int i=0;i<tam;i++){
        if(v[i]=='m' || v[i]=='M'){
            std::cout << "O " << n[i] << " é do sexo masculino." << std::endl;
        }
    }

}

int velho(int id[]){
    int maior=0;
    for(int i=0;i<tam;i++){
        if(id[i]>=id[maior])
        {
            maior=i;
        }
    }
    return maior;
}

int novo(int id[]){
    int menor=0;
    for(int i=0;i<tam;i++){
        if(id[i]>=id[menor])
        {
            menor=i;
        }
    }
    return menor;
}


void cadastro(){
    std::string n[tam],nome;
    char s[tam];
    int id[tam],masculino,feminino,maior,menor;
    float media;

    for(int i=0;i<tam;i++){

        std::cout << "Digite o " << i+1 << "º nome: ";
        std::cin >> n[i];
        std::cout << "Digite a " << i+1 << "º idade: ";
        std::cin >> id[i];
        std::cout << "Digite o " << i+1 << "º sexo(M ou F): ";
        std::cin >> s[i];
        if(s[i]!='M'&&s[i]!='m'&&s[i]!='F'&&s[i]!='f'){
            std::cout << "Digite um sexo valido(M ou F): ";
            std::cin >> s[i];
        }
    }

    std::cout << std::endl;

    media=mediaidade(id);
    std::cout << "A media das idade é: " << media << std::endl;
    masculino=sexo(s);
    feminino=tam-masculino;
    std::cout << "Foram cadastradas " << masculino << " pessoas do sexo masculino e " << feminino << " pessoas do sexo feminino." << std::endl;

    std::cout << "Digite o nome de uma pessoa cadastrada: ";
    std::cin >> nome;

    dados(nome,n,id,s);
    std::cout << std::endl;

    masculinos(s,n);

    maior=velho(id);
    menor=novo(id);

    std::cout << "A pessoa mais velha é " << n[maior] << " tem " << id[maior] << " anos e é do sexo " << s[maior] << std::endl;
    std::cout << "A pessoa mais nova é " << n[menor] << " tem " << id[menor] << " anos e é do sexo " << s[menor] << std::endl;






}

//BLOCO PRINCIPAL:

int main() {
    setlocale(LC_ALL, "Portuguese");

    cadastro();


    std::cout << std::endl;
    system ("pause");
    return 0;
}
