#include<iostream>

#include<cstdio>

#include<cstdlib>

using namespace std;
/*
Escreva um programa que leia um número inteiro qualquer no intervalo entre 11 e 999 (caso o
número não estiver no intervalo apresentar mensagem de “NÚMERO INVÁLIDO” e encerrar o programa),
se o número estiver no intervalo permitido apresente a soma dos seus algarismo. Por exemplo o número
251 (2 + 5 + 1) a resposta é 8
*/

main()
{
    int number,n1=0;
    cout << "Informe um número inteiro: ";
    cin >> number;

    if(number<= 11 || number >= 999){
        cout << "Número inválido. ";
    }else {
        while(number>10){
             n1 = number%10 + n1;
             number = (number/10);

        }
        n1 = n1 + number;
        cout << n1;
    }

}
