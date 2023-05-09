#include<iostream>

#include<cstdio>

#include<cstdlib>

using namespace std;
/*
7 – Crie um programa que receba um número inteiro N qualquer maior ou igual à 3 e menor ou igual à
20 e desenhe na tela uma imagem como o exemplo apresentado abaixo (é obrigatório o uso de laços
“for” para a impressão desenho):

Ex: N = 5

*****
****
***
**
*


*/

main()
{
    int n;
    do{

        for(int i=0; i<n;i++){
            for(int j = n; j>i; j--){
                cout << "*";
            }
            cout << "\n";
        }
        cout << "Informe N: " << endl;
        cin >> n;
    }while(n>3 && n<=20);

}
