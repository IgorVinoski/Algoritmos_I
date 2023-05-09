#include<iostream>

#include<cstdio>

#include<cstdlib>

using namespace std;
/*
1 – Implemente um um programa que leia um número inteiro, positivo menor ou igual a 10. Montar e
mostrar a tabuada desse número, como o exemplo abaixo.
Informe um número: _ Tabuada de 8
1 x 8 = 8
2 X 8 = 16
...
10 x 8 = 80
*/

main()
{
    int number;
    cout << "Digite um numero: " << endl;
    cin >> number;

    for(int i=0;i<number;i++){
            cout << i << " x " << number << " = " << i*number << endl;
    }

}
