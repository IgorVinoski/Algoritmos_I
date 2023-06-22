#include<iostream>

#include<cstdio>

#include<cstdlib>

using namespace std;

/*
4 – Escreva um programa que gere valores menores que 100 para preencher uma matriz de inteiros de
ordem 8, a seguir apresente:
- Os elementos da matriz
- Os elementos da diagonal principal da matriz, juntamente com a soma destes elementos
- Os elementos pares da diagonal secundária da matriz
- O maior elemento acima da diagonal principal
- Os elementos ímpares abaixo da diagonal principal.
*/

main()
{
    int matriz[8][8];
    int paresDS[10];
    int qtdParesDS=0;
    int maior;
    int menor;
    int qtdImparesAbaixoDS=0;
    int imparesAbaixoDS[10];
    cout << "Matriz gerada: "<<endl;
    for(int i=0; i<8; i++){
        for(int j=0; j<8; j++){
            matriz[i][j] = rand() % 100;
            cout << matriz[i][j] << "\t";

            if(i<j){//os elementos a cima da diagonal principal tem o indice da coluna maior do que o da linha
                if(i==1 && j == 2){
                    maior = matriz[i][j];
                    menor = matriz[i][j];
                }else if(matriz[i][j]> maior){
                    maior = matriz[i][j];
                }else if(matriz[i][j]<menor){
                menor = matriz[i][j];}
            }

            if(i+j==8-1){//Diagonal secundária é dado por: Linha + Coluna = N - 1
                if(matriz[i][j]%2==0){
                    paresDS[qtdParesDS];
                    qtdParesDS++;
                }
            }

            if(i+j>8 -1){//os elementos abaixo da DS linha + coluna é maior que a ordem mais 1
                if(matriz[i][j]%2==0){
                    imparesAbaixoDS[qtdImparesAbaixoDS]= matriz[i][j];
                    qtdImparesAbaixoDS++;

                }
            }

        }
        cout << "\n";
    }
    cout << "\n";

    int soma;
    cout << "Diagonal principal: " << endl;
    for(int i=0;i<8;i++){
        soma+=matriz[i][i];
        cout << matriz[i][i] << ", ";
    }
    cout << "\n";
    cout << "Soma dos elementos da diagonal principal: " << soma << endl;
    cout << "Elementos pares da diagonal secundaria: " << endl;
    for(int i = 0; i<qtdParesDS; i++){
        cout << paresDS[i] << ", ";
    }
    cout << "\n";
    cout << "O maior elemento acima da diagonal principal: " << maior<<endl;
    cout << "Os elementos impares abaixo da diagonal secundaria:  " <<endl;
    for(int i = 0; i<qtdImparesAbaixoDS; i++){
        cout << imparesAbaixoDS[i] << ", ";
    }
    cout << "\n";
}
