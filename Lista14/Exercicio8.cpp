#include<iostream>

#include<cstdio>

#include<cstdlib>

using namespace std;

/*
8 - Faça um algoritmo que receba um número ímpar N, onde (5 <= N <= 15), validar o valor
informado e estando fora do intervalo solicitar a leitura de um outro valor.
Após uma entrada válida gerar uma matriz NxN, contendo os seguintes valores
Exemplo N = 5


A A # B B
A A # B B
# # # # #
C C # D D
C C # D D

*/

main()
{
 int n;


 do{
    cout << "Informe um valor para a ordem da matriz 'N': "<<endl;
    cin >> n;

    char m[n][n];

    cout << "\n";
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            if(i < n/2 && j < n/2 ){
                m[i][j]= 'A';
            }else if( i > n/2 && j < n/2){
                m[i][j]= 'C';
            }else if( i < n/2 && j > n/2){
                m[i][j]= 'B';
            }else if( i > n/2 && j > n/2){
                m[i][j]= 'D';
            }else{
                m[n/2][j]='#';
                m[i][n/2]='#';
            }
        }
    }



    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cout << m[i][j] << "\t";
        }
        cout << "\n";
    }

 }while(n < 5 || n > 15);



}
