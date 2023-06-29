#include<iostream>

#include<cstdio>

#include<cstdlib>

using namespace std;

/*
9 - Elabore um programa que preencha de forma pseudoaleat�ria uma matriz 6 x 6 com
n�meros inteiros menores que 50 sem n�meros repetidos na matriz, apresente a matriz
gerada na tela, execute as trocas especificadas a seguir, na respectiva ordem e mostre a
matriz resultante:
- A linha 2 com a linha 8;
- A coluna 4 com a coluna 10;
- A diagonal principal com a diagonal secund�ria;
- A linha 5 com a coluna 10.
*/

main(){
    srand(time(NULL));
    const int N = 6;
    int m[N][N];
    int v[N*N];
    for(int i = 0; i < N*N; i++){
        v[i]= rand() % 37;
        for(int j = 0; j < i; j++){
            if(v[i]==v[j]){
                i--;
            }
        }
    }
    for(int i = 0 ; i < N*N; i++){
        cout << v[i] << ", ";
    }
    cout << endl;
    for(int i = 0; i < N; i++){
        for(int j = 0; j < N; j++){
            m[i][j]=v[i + (N*j)];
            cout << m[i][j] << "\t";
        }
        cout << "\n";
    }
}
