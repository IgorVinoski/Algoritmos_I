#include<iostream>

#include<cstdio>

#include<cstdlib>

using namespace std;

/*
6 - Escrever um algoritmo que cria uma matriz M[3][3] com valores exibidos abaixo. Com base na matriz M, criar
a matriz N, a qual deve possuir os valores da matriz M com uma rotação de 180o, conforme o exemplo abaixo
(usar laços for na implementação, ou seja, a atribuição dos valores da matriz N deve ser realizada dentro de
um laço).

Matriz M:
1 2 3
4 5 6
7 8 9

Matriz N de saída (rotação de 180o):
9 8 7
6 5 4
3 2 1

*/

main()
{

    int const ordem = 3;
    int m[ordem][ordem];
    int n[ordem][ordem];

    for(int i=0;i<ordem;i++){
        for(int j=0; j<ordem; j++){
            m[i][j]= rand() % 100;
            cout << m[i][j] << "\t";
        }
        cout << "\n";
    }
    cout << "\nNova matriz: \n";
    int ordem2= ordem-1;
    for(int i =0; i<ordem; i++){
        for(int j=0;j<ordem; j++){
            int aux = n[(ordem2)-i][(ordem2)-j];
            n[(ordem2)-i][(ordem2)-j]=m[i][j];
            m[i][j]=aux;
        }
        cout << "\n";
    }
    for(int i=0;i<ordem;i++){
    for(int j=0; j<ordem; j++){
        cout << n[i][j] << "\t";
    }
    cout << "\n";
}
}
