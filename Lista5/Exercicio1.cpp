#include<iostream>

#include<cstdio>

#include<cstdlib>

using namespace std;

/*
1 – Faça um algoritmo que receba um número inteiro N (N>0) e mostre os números de 1 até N.
*/
main()
{
    int n=1, number;
    cout << "Informe um número inteiro: ";
    cin >> number;

    if(number<0){
        cout << "Número inválido.";
    }else{
        while(n<number){
        cout << n++;
    }
}
    }


