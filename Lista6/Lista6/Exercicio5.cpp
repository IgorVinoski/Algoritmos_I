#include<iostream>

#include<cstdio>

#include<cstdlib>

using namespace std;
/*
Fa�a um algoritmo que apresente os primeiros 3 n�meros perfeitos maiores que 1. Dizemos que um
n�mero � perfeito se � igual � soma de todos os seus fatores (divisores), excluindo ele pr�prio. Por
exemplo, 6 � um n�mero perfeito pois seus divisores exatos menores que ele s�o: 1, 2 e 3, somando 1
+ 2 + 3 = 6
*/

main()
{
    int n, i =0, divisor=0;
    cout << "Informe um valor. ";
    cin >> n;

    while(n>i && divisor < n){
        i++;
        if(n%i==0){
            cout << "Divisor: " << i << endl;

            divisor+=i;
        }

    }
    cout << "soma divisor: " << divisor;
}
