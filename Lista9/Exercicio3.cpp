#include<iostream>

#include<cstdio>

#include<cstdlib>

using namespace std;
/*
3 - Entrar com um n�mero e imprimir os seus divisores, informando se este n�mero � primo
ou n�o � primo.
*/

main()
{
    int number, divisores=0;
    cout << "Informe um numero: " << endl;
    cin >> number;
    for(int i = 1; i<number;i++){
        if(number%i==0 && i!=1 && i!=number){
            cout << "Divisor: " << i << endl;
            cout << "Nao e primo. " << endl;
            divisores++;
        }
    }
    if(divisores<1){
        cout << "E primo." << endl;
    }
}
