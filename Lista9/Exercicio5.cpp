#include<iostream>

#include<cstdio>

#include<cstdlib>

using namespace std;
/*
5 - Escrever um algoritmo que leia um n�mero inteiro e positivo M e um valor para a vari�vel
N. Escrever o valor da pot�ncia de N^M. Deve-se apenas utilizar multiplica��es.
*/

main()
{
    int m;
    int n;
    cout << "Informe o valor de M: " << endl;
    cin>>m;
    cout << "Informe o valor de N: " << endl;
    cin>>n;
    int res=n;
    for(int i = 1; i<m; i++){
        n*=n;
        cout << n;
    }


}
