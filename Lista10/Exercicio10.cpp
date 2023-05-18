#include<iostream>

#include<cstdio>

#include<cstdlib>
#include <cmath>
#include <iomanip>

using namespace std;
/*
10 – Uma agência bancária possui três tipos de aplicações disponíveis com rendimentos
diferenciados conforme tabela apresentada abaixo:
Tipo Descrição Rendimento
1    Poupança   0.45%
2    LCI        0.87%
3    CDB       1.0%
Escreva um programa que receba o valor inicial aplicado e após gere três vetores que devem armazenar
a evolução do rendimento nos 12 primeiros meses, após solicite ao usuário qual o tipo de aplicação e
qual o número do mês quer verificar e o sistema deverá apresentar o valor atualizado da referida
aplicação no referido mês.
OBS: os valores monetários devem ser manipulados com 2 casas decimais.
*/

main()
{
    float capitalInicial = 0;
    cout << "Informe o capital inicial: ";
    cin >> capitalInicial;
    int tipo,mes;
    float vet1[12];
    float vet2[12];
    float vet3[12];
    /*ou, outra forma de solucionar:
        vet[0]= capitalInicial * (capitalInicial * taxa/100)
        assim, para cada iteração do loop teremos
        vet[i] = vet[i-1] + (vet[i-1] + capitalInicial * 100/100)
    */
    for (int i = 0; i < 12; i++) {
            vet1[i] = (pow((1+0.0045),i) ) * capitalInicial;
            vet2[i] = (pow((1+0.0087),i) ) * capitalInicial;
            vet3[i] = (pow((1+1.0),i) ) * capitalInicial;
    }
    cout << fixed << setprecision(2);
    cout << "Qual o tipo de aplicacao?: \n1- poupanca; \n2-LCI; \n3- CDB. \n";
    cin >> tipo;
    cout << "Qual mes? \n";
    cin >> mes;
    if(tipo==1){
        cout << vet1[mes-1]<< endl;;
    }else if(tipo ==2){
        cout << vet2[mes-1]<< endl;
    }else{
        cout << vet3[mes-1]<<endl;
    }

}
