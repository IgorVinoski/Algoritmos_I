#include <cstdio>
#include <cstdlib>
#include <iostream>
using namespace std;
/*
5 - Faça um algoritmo que preencha três vetores com cinco posições cada. O primeiro vetor receberá os
códigos de cinco funcionários; o segundo e o terceiro vetor receberão, respectivamente, o salário e o
tempo de serviço de cada um dos funcionário, nas respectivas posições, ou seja o primeiro funcionário
terá sua matrícula na posição 0 do vetor, seu salário na posição 0 do segundo vetor e o seu tempo de
serviço na posição 0 do terceiro vetor.
Mostre um primeiro relatório apenas com as matrículas dos funcionários que não terão aumento;
Mostre um segundo relatório apenas com as matrículas e os novos salários dos funcionários que terão
aumento, 
sabe-se que os funcionários que terão direito ao aumento são aqueles que possuem 
tempo de serviço superior a cinco anos ou salário inferior a R$ 1800,00, sabe-se, ainda, que,
 se o funcionário satisfizer às duas condições anteriores, tempo de serviço e salário, o aumento será de 15%; 
 para o funcionário que satisfazer apenas à condição tempo de serviço, o aumento será de 10%; 
 para aquele
que satisfazer apenas à condição salário, o aumento será de 5%.


*/

main(){
    int cdFuncionario[5];
    long salarioFuncionario[5];
    double tempoFuncionario[5];
    int cdFuncionarioAumento[5];
    int qtdFuncionarioAumento=0;
    for(int i = 0; i<5; i++){
        cout << "Informe o codigo do funcionario: "<< endl;
        cdFuncionario[i] =  rand() %100;
        cout << "Informe o salario do funcionario: "<< endl;
        salarioFuncionario[i] =  rand() % 100000 /100.0 * 10.0 /2 * 4 *5.5555;
        cout << "Informe o tempo que o funcionario trabalha na empresa: " <<endl;
        tempoFuncionario[i] = rand() % 21;
        if(salarioFuncionario[i]< 1800 && tempoFuncionario[i]>5){
            salarioFuncionario[i]*= 1.15;
            cdFuncionarioAumento[qtdFuncionarioAumento]=cdFuncionario[i];
            qtdFuncionarioAumento++;
        }else if(tempoFuncionario[i]>5){
             salarioFuncionario[i]*= 1.10;
            cdFuncionarioAumento[qtdFuncionarioAumento]=cdFuncionario[i];
            qtdFuncionarioAumento++;
        }else if(salarioFuncionario[i]<1800){
            salarioFuncionario[i]*=1.05;
            cdFuncionarioAumento[qtdFuncionarioAumento]=cdFuncionario[i];
            qtdFuncionarioAumento++;
        }
    }

    cout << "Os funcionarios que receberam aumento: " << endl;
    for(int i = 0; i<qtdFuncionarioAumento; i++){
        cout << cdFuncionarioAumento[i] << "\t ";
    }
    cout << "\n";
    for(int i = 0; i<qtdFuncionarioAumento; i++){
        cout << salarioFuncionario[i] << "\t ";
    }

    cout << "\n";
    cout << "Os funcionarios que nao receberam aumento: ";
    int semAumento[10];
    int qtdSemAumento=0;

    bool difereca;
    for(int i = 0; i<5; i++){
        for(int j=0; j<5; j++){
             difereca = false;
            if(cdFuncionario[i]==cdFuncionarioAumento[j]){
                break;
            }else{
                difereca = true;
            }
        }
        if(difereca){
            semAumento[qtdSemAumento]=cdFuncionario[i];
            qtdSemAumento++;
        }
    }


        for(int i = 0; i<qtdSemAumento; i++){
        cout << semAumento[i] << "\t ";
    }
}