#include<iostream>

#include<cstdio>

#include<cstdlib>

using namespace std;
/*
4 - Escreva um programa que leia um número inteiro qualquer e verifique se o número é divisível por
3 e por 5, o programa deverá apresentar como saída as palavras: “DIVISÍVEL” caso o número for
divisível por 3 e por 5 ou “NÃO DIVISÍVEL” caso ele não for divisível. Construa também o diagrama de
blocos deste exercício.

*/

main()
{
    int number;

    cout << "Digite o número para verificar se ele é divisível por 3 e por 5: ";
    cin >> number;

    if(number%3==0 && number%5==0){
        cout << "É divisível!";
    } else {
        cout << "Não é divisível!";
    }

}
