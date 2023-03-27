#include<iostream>

#include<cstdio>

#include<cstdlib>

using namespace std;
/*
2 – Faça um algoritmo que receba um número inteiro N (N>0) e mostre a soma e a média dos números
de 1 até N.
*/

main()
{
    int n=0, number,  soma=0;
    cout << "Informe um número: ";
    cin >> number;


    if(number<0){
        cout << "Número inválido.";
    }else {
        while(n<number){
        n++;
        soma +=n;
        float media = soma/number;
        cout << "MÉDIA: " << media;
    }
    }





}
