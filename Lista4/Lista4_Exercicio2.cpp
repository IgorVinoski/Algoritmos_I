#include<iostream>
#include<cstdio>
#include<cstdlib>

using namespace std;
/*
2 – Escreva um algoritmo que leia 5 números, A, B, C, D e E. Mostrar o maior número e o menor número.
*/

main()
{
 int a, b, c, d, e;

    cout << "Informe o valor de A: ";
    cin >> a;
    cout << "Informe o valor de B: ";
    cin >> b;
    cout << "Informe o valor de C: ";
    cin >> c;
    cout << "Informe o valor de D: ";
    cin >> d;
    cout << "Informe o valor de E: ";
    cin >> e;



    int num[5] = {a, b, c, d, e};
    int maior, menor;

    maior = a;
    menor = a;
    for(int i = 0; i<5; i++ ){
        if(num[i]>maior){
            maior = num[i];
        }
        if(num[i]<menor){
            menor = num[i];
        }
    }
    cout << "O menor valor é: " << menor << " O maior valor é: " << maior;
}
