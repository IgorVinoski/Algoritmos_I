#include<iostream>

#include<cstdio>

#include<cstdlib>

using namespace std;
/*
2 � Fa�a um algoritmo que receba um n�mero inteiro N (N>0) e mostre a soma e a m�dia dos n�meros
de 1 at� N.
*/

main()
{
    int n=0, number,  soma=0;
    cout << "Informe um n�mero: ";
    cin >> number;


    if(number<0){
        cout << "N�mero inv�lido.";
    }else {
        while(n<number){
        n++;
        soma +=n;
        float media = soma/number;
        cout << "M�DIA: " << media;
    }
    }





}
