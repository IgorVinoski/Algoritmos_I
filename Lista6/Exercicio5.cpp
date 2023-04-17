#include<iostream>

#include<cstdio>

#include<cstdlib>

using namespace std;
/*
Faça um algoritmo que apresente os primeiros 3 números perfeitos maiores que 1. Dizemos que um
número é perfeito se é igual à soma de todos os seus fatores (divisores), excluindo ele próprio. Por
exemplo, 6 é um número perfeito pois seus divisores exatos menores que ele são: 1, 2 e 3, somando 1
+ 2 + 3 = 6
*/

main()
{
    int n, i =0, divisor=0;
    cout << "Informe um valor. ";
    cin >> n;

    while(n>i && divisor < n){
        i++;
        if(n%i==0){
            cout << "Divisor: " << i << endl;

            divisor+=i;
        }

    }
    cout << "soma divisor: " << divisor;
}
