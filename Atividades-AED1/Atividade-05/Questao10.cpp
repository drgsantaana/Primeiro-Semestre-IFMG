/*
 *###################################################
 *Nome: Daniel Reis Goncalves Sant'ana
 *Data: 14/08/2022
 *Turma: ENGC-2022
 *Titulo: Questao 10 - Atividade 05
 *###################################################
*/
#include <iostream>
#include <stdlib.h>
#include <clocale>

//VARIAVEIS GLOBAIS:



//FUN�OES:
float calcula(float v[],char media){
    float mediacalculada=0;

    if(media=='A' || media=='a'){
        for(int i=0;i<3;i++){
            mediacalculada=mediacalculada+v[i];
        }
        mediacalculada=mediacalculada/3;
    }else{
        for(int i=0;i<3;i++){
            if(i==0){
                mediacalculada=mediacalculada+(v[i]*5);
            }else{
                if(i==1){
                    mediacalculada=mediacalculada+(v[i]*3);
                }else{
                    mediacalculada=mediacalculada+(v[i]*2);
                }
            }
        }
        mediacalculada=mediacalculada/(5+3+2);
    }

    return mediacalculada;
}


//BLOCO PRINCIPAL:

int main() {
    setlocale(LC_ALL, "Portuguese");
    float notas[4];
    char media;
    for(int i=0;i<3;i++){
        std::cout << "Digite a " << i+1 << "� nota: ";
        std::cin >> notas[i];

    }
    std::cout << "Digite A para m�dia aritm�tica e P para m�dia ponderada: ";
    std::cin >> media;
    while(media!='A'&&media!='a'&&media!='P'&&media!='p'){
        std::cout << "Digite uma letra valida(A para aritm�tica e P para ponderada): ";
        std::cin >> media;
    }

    notas[3]=calcula(notas,media);

    if(media=='A' || media=='a'){
        std::cout << "A media aritm�tica � igual a: " << notas[3];
    }else{
        std::cout << "A media ponderada � igual a: " << notas[3];
    }

    std::cout << std::endl;
    system ("pause");
    return 0;
}
