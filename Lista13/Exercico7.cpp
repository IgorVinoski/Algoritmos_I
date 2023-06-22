#include<iostream>

#include<cstdio>

#include<cstdlib>

using namespace std;
/*
7 - Faça um algoritmo que receba um número inteiro N, sendo 3 < N < 7. A seguir, crie uma matriz NxN
conforme exemplo abaixo, em que os elementos acima da diagonal principal possuem o valor ‘A’, os
elementos abaixo da diagonal principal possuem o valor ‘B’ e os elementos da diagonal principal o valor
X:
Exemplo de matriz 5x5:
https://prnt.sc/B6N1uOS5oUFR

Observações:
● A matriz é do tipo char.
● Declarar a matriz somente depois que o usuário informar o valor de N. Exemplo:
cout << “Informe N: ”;
cin >> N;
char MAT[N][N]; //declarar a matriz depois de ler N
*/

main()
{
    int ordem;
    cout << "Informe a ordem da matriz: "<<endl;
    cin >> ordem;
    if(ordem>3 && ordem<7){
        char m[ordem][ordem];
        for(int i =0; i<ordem; i++){
                for(int j=0; j<ordem; j++){
                    if(j==i){
                        m[i][j]= 'X';
                    }
                    if(j>i){
                        m[i][j]= 'A';
                    }
                    if(i>j){
                        m[i][j]= 'B';
                    }
                }

        }
        for(int i =0;i<ordem; i++){
        for(int j=0; j<ordem; j++){
            cout << m[i][j] << "\t";
        }
        cout << "\n";
    }

    }


}
