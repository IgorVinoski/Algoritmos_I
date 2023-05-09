#include<iostream>

#include<cstdio>

#include<cstdlib>

using namespace std;
/*
5 - Escrever um algoritmo que leia um número inteiro e positivo M e um valor para a variável
N. Escrever o valor da potência de N^M. Deve-se apenas utilizar multiplicações.
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
