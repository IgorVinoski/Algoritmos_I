#include<iostream>

#include<cstdio>

#include<cstdlib>

using namespace std;
/*
4 – Faça um algoritmo que leia um número inteiro qualquer e verifique se o número lido é um número
primo ou não. Número primo é aquele que é divisível por 1 e por ele mesmo, por exemplo: 2, 3, 5, 7,
11 são números primos.
*/

main()
{
    int n, i=1, divisores=0;
    cout << "informe um numero: ";
    cin >> n;
    while(n>i){
        i++;
        if(n%i==0){
            divisores++;
        }

    }
        if(divisores>=3){
            cout << "nao primo.";
        }else{
            cout << "primo.";
        }
}
