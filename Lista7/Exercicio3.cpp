#include<iostream>

#include<cstdio>

#include<cstdlib>
int fatorial(int);
using namespace std;
/*
Faça um programa que leia um número N que indica quantos valores inteiros e positivos devem ser
lidos a seguir. Para cada número lido, mostre uma tabela contendo o valor lido e o fatorial desse valor.

*/

main()
{
    int n;
    cout << "Informe um numero: ";
    cin >> n;
    int i =0;
    cout << "Numero:\t Fatorial" << endl;
    while(i<=n){
        cout << i << "\t\t"<< fatorial(i) << endl;
        i++;
    }

}

int fatorial(int x){
    int i=1;
    int nfatorial = 1;
    while(i<=x){
        nfatorial*=i;
        i++;
    }
    return nfatorial;
}
