#include<iostream>

#include<cstdio>

#include<cstdlib>

using namespace std;

/*
1 � Fa�a um algoritmo que receba um n�mero inteiro N (N>0) e mostre os n�meros de 1 at� N.
*/
main()
{
    int n=1, number;
    cout << "Informe um n�mero inteiro: ";
    cin >> number;

    if(number<0){
        cout << "N�mero inv�lido.";
    }else{
        while(n<number){
        cout << n++;
    }
}
    }


