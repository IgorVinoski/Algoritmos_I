#include<iostream>

#include<cstdio>

#include<cstdlib>

using namespace std;
/*
4 – Escreva um programa que gere dois vetores X[5] e Y[5] com valores no intervalo de 0 a
50. A seguir:
a) Criar um vetor Z que contenha os valores ímpares de X. Mostre o vetor Z.
b) Criar um vetor W que contenha os valores pares de X. Mostre o vetor W.
c) Criar um vetor S que contenha os valores de X e Y que são maiores que 30. Mostre o vetor S.
*/

main()
{
    int x[5], y[5];
    int qtdParesX=0;
    int w[qtdParesX];
    int qtdMaioresX=0;
    int qtdMaiores=0;
    int s[10];
    for(int i = 0; i<5; i++){
        x[i] = rand() % 51;
        y[i] = rand()%51;

    }
    for(int i = 0 ; i<5; i++){
        if(x[i]%2==0){
          w[i]=x[i];
          qtdParesX++;
        }
    }
    cout << "Vetor W : " << endl;
    for(int i = 0;i<qtdParesX; i++){
        cout << w[i] << ",";
    }
    cout << "\n";
    for(int i= 0; i<5;i++){
        if(x[i]>30){
            s[qtdMaiores]=x[i];
            qtdMaiores++;
        }
        if(y[i]>30){
            s[qtdMaiores]=y[i];
            qtdMaiores++;
        }
    }

    for(int i = 0;i<qtdMaiores;i++){
        cout << s[i] << ", ";
    }
    cout << "\n";
}
