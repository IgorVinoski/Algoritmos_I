#include<iostream>

#include<cstdio>

#include<cstdlib>

using namespace std;
/*
2 – Escreva um programa que manipule uma matriz 3 x 6 de números inteiros, em seguida execute as
seguintes ações:
- Gerar valores aleatórios para preencher a matriz, sendo menores que 50
- Mostrar a matriz na tela
- Criar dois vetores (pares e ímpares) no vetor “pares” devem ser incluídos todos os valores pares da
matriz, no vetor “ímpares” devem ser incluídos todos o valores ímpares da matriz, mostrar os dois
vetores na tela
*/

main()
{
    int matriz[3][6];
    int valorGerado;
    int valoresPares[18];
    int valoresImpares[18];
    int quantidadePares = 0;
    int quantidadeImpares =0;

    cout << "Matriz gerada: " << endl;
    for(int linha=0; linha<3; linha++){
        for(int coluna=0; coluna<6; coluna++){
            matriz[linha][coluna] =  rand() % 50;
            valorGerado = matriz[linha][coluna];

            cout << valorGerado << "\t";

            if(valorGerado%2==0){
                valoresPares[quantidadePares] = valorGerado;
                quantidadePares++;
            }else{
                valoresImpares[quantidadeImpares] = valorGerado;
                quantidadeImpares++;
            }
        }
        cout << "\n";
    }
    cout << "\n";

    cout << "Valores pares:" << endl;
    for(int i = 0; i<quantidadePares; i++){
        cout << valoresPares[i] << ", ";
    }

    cout << "\n";

    cout << "Valores impares:" << endl;
    for(int i = 0; i<quantidadeImpares; i++){
        cout << valoresImpares[i]<< ", ";
    }
    cout << "\n";



}
