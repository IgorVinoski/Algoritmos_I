#include<iostream>

#include<cstdio>

#include<cstdlib>

using namespace std;
/*
4 � Fa�a um algoritmo que leia um n�mero inteiro qualquer e verifique se o n�mero lido � um n�mero
primo ou n�o. N�mero primo � aquele que � divis�vel por 1 e por ele mesmo, por exemplo: 2, 3, 5, 7,
11 s�o n�meros primos.
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
