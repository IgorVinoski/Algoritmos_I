#include<iostream>

#include<cstdio>

#include<cstdlib>
#include<ctime>

using namespace std;
/*
8 - Escrever um programa que gere um vetor V[20] com valores no intervalo de 0 a 100 e
mostre os valores gerados. Modifique o vetor de modo que o primeiro elemento passe para a
última posição, e desloque todos os outros elementos uma posição para a esquerda.

Antes:
12 14 2 7 5 0 10 19 34 52 26 12 53 78 56 32 33 45 44 18

Depois:
14 2 7 5 0 10 19 34 52 26 12 53 78 56 32 33 45 44 18 12
*/
// 0 1 2 3 5 6
// 20 0 2 3 5
main()
{
    int vet[20];
    int aux, aux2;
    for(int i  = 0; i<20; i++){
        vet[i] = rand() % 101;
        cout << vet[i] << ", ";
    }
    cout << "\n";
    system("PAUSE");
    aux= vet[0];
    for(int i =0 ; i<20; i++){
        vet[i] = vet[i+1];
    }
    vet[19] = aux;

    for(int i = 0 ; i<20; i++){
        cout << vet[i] << ", ";
        }


}
