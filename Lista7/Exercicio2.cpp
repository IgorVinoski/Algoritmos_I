#include<iostream>

#include<cstdio>

#include<cstdlib>

using namespace std;
/*
2 - Faça um programa que leia um número N e mostre o fatorial desse valor.

*/

main()
{
    int n;
    cout << "Informe um numero qualquer: ";
    cin >> n;
    int i=1;
    int fatorial = 1;
    int num;
    while(i<=n){
        fatorial*=i;
        i++;
    }
    cout << fatorial;
}


