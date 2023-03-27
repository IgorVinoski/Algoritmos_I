#include<iostream>

#include<cstdio>

#include<cstdlib>

using namespace std;
/*
– Crie um algoritmo que receba dois números X e Y, sendo X < Y. Calcule e mostre:
● A soma dos números pares desse intervalo de números, incluindo os números digitados;
*/

main()
{
    int x, y, soma =0;

    cout << "Informe o número X: ";
    cin >> x;

    cout << "Informe o número Y: ";
    cin >> y;


    if(x<y){
        while(x <= y ){
            if(x%2==0){
                soma+=x;
            }
          x++;
        }
        cout << soma;
    }else{
        cout << "X > Y = ENTRADA INVÁLIDA.";
    }
}
