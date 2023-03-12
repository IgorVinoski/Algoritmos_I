#include<iostream>

#include<cstdio>

#include<cstdlib>

using namespace std;
/*
10 – Escreva um programa que receba três valores inteiros, A, B, C, verificar se eles podem ser valores
dos lados de um triangulo e, se forem, se é um triângulo escaleno, equilátero ou isóscele, considerando
os seguintes conceitos:
• O comprimento de cada lado de um triangulo é menor do que a soma dos outros dois lados.
• Chama-se equilátero o triângulo que tem três lados iguais.
• Denominam-se isósceles o triângulo que tem o comprimento de dois lados iguais.
• Recebe o nome de escaleno o triângulo que tem os três lados diferentes.
*/

main()
{
    int a, b, c;

    cout << "Informe o valor de A: ";
    cin >> a;
    cout << "Informe o valor de B: ";
    cin >> b;

    cout << "Informe o valor de C: ";
    cin >> c;


    if((a+b) > c && (c+b) > a && (c+c) > b){
        if(a==b && b==c){
            cout << "Equilátero.";
        }else if(a==b || a==c || c==b){
            cout << "Isóceles. ";
        }else{
            cout << "Escaleno. ";
        }
    }else{
        cout << "Não formam um triangulo. ";
    }
}
