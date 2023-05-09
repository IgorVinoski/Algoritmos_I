#include<iostream>

#include<cstdio>

#include<cstdlib>

using namespace std;

/*
6 - Construa programa para calcular o quadrado de um número positivo com base na descrição
do algoritmo a seguir:
● O Algoritmo deve calcular o quadrado de um número N com base na soma dos N
primeiros números ímpares. Por exemplo:

3^2 = 1 + 3 + 5
6
2 = 1 + 3 + 5 + 7 + 9 + 11
8
2 = 1 + 3 + 5 + 7 + 9 + 11 + 13 + 15
*/
main()
{
    setlocale(LC_ALL, "Portuguese");
    int n, soma;
    cout << "Informe um número N: " << endl;
    cin >> n;
    int quadrado = n * n;
    soma = 0;
    for(int i = 1; soma != quadrado; i++)
    {
        if(i % 2 != 0)
        {
            cout << i << " + ";
            soma += i;
        }

    }
    cout << "\nQuadrado de " << n << " é: " << soma << endl;
}
}
