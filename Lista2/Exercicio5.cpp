#include<iostream>

#include<cstdio>

#include<cstdlib>

using namespace std;

/*
Suponha que um caixa eletrônico disponha apenas de notas de 1, 2, 5, 10, 20, 50 e 100 reais.
Considerando que alguém está sacando um determinado valor, escreva um algoritmo que mostre a
quantidade de cada tipo de notas que o caixa deve fornecer. Suponha que o sistema monetário não
utilize centavos.
*/


main()
{
int saque, n100, n50, n20, n10, n5, n2, n1, r100, r50, r20, r10, r5, r2, r1;

cout << "Digite a quantia que você deseja sacar: ";
cin >> saque;

n100 = saque/100;
r100 = saque%100;
n50 = r100/50;
r50 = r100%50;
n20 = r50/20;
r20 = r50%20;
n10 = r20/10;
r10 = r20%10;
n5 = r10/5;
r5 = r10%5;
n2 = r5/2;
r2 = r5%2;
n1 = r2/1;
r1 = r2%1;


cout << " Notas de 100: " << n100 << "\n Notas de 50: " << n50 << "\n"<<
"Notas de 20: " << n20 << " \n Notas de 10: "<< n10 << " \n Notas de 5: " << n5 << "\n"
<< "Notas de 2: "<<  n2 << " \n Notas de 1: "<<  n1;

}
