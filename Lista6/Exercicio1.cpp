#include<iostream>

#include<cstdio>

#include<cstdlib>

using namespace std;
/*
1 – Faça um algoritmo que leia N números inteiros e apresente o maior, o menor e a média entre os
números lidos, para a leitura quando o número informado for zero (0), quando deve ser apresentado o
resultado na tela.
*/

main()
{
    int n, i=0, maior, menor, soma=0;

    do{
        cout << "Informe um numero: ";
        cin >> n;
        soma+=n;
        if(n==0){
            break;
        }

        if(i==0){
            maior = n;
            menor = n;
        }else {
            if(n>maior){
                maior = n;
            }
            if(n>menor){
                menor = n;
            }
        }

         i++;
    }while(n!=0);

    cout << "O maior numero e: " << maior << endl;
    cout << "O menor numero e: " << menor << endl;
    float media = soma/i;
    cout << "A media e: " << media << endl;
}
