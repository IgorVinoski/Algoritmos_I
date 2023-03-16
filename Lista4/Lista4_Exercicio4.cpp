#include<iostream>
#include<cstdio>
#include<cstdlib>

using namespace std;
/*
4 – Uma empresa irá dar um aumento de salário aos seus funcionários de acordo com a categoria de
cada empregado. O aumento seguirá as seguintes regras:
● A, C, F, e H ganharão 10 % de aumento sobre o salário
● B, D , E , I , J e T ganharão 15 % de aumento sobre o salário
● K e R ganharão 25 % de aumento sobre o salário
● L, M , N , O, P e S ganharão 35 % de aumento sobre o salário
● U, V , X , Z e W ganharão 50 % de aumento sobre o salário
Faça o algoritmo que leia o nome, a categoria e o salário do empregado. O programa deve
mostrar o nome do funcionário e valor do salário reajustado.
*/

main()
{
char nome[100];
int salario;
char categoria;
    cout << "Informe o nome: ";
    gets(nome);
    fflush(stdin);
    cout << "Informe a categoria: ";
    cin >> categoria;
    fflush(stdin);
    cout << "Informe a o salario: ";
    cin >> salario;
    fflush(stdin);

    if(categoria == 'A' || categoria == 'C' || categoria == 'F' || categoria == 'H' ){
        cout << "O novo salário do " << nome << " é de: " << salario*1.10;
    }else if(categoria == 'B'|| categoria == 'D' || categoria == 'E' || categoria == 'I' || categoria == 'J' || categoria == 'T'){
        cout << "O novo salário do " << nome << " é de: " << salario*1.15;
    }else if(categoria == 'K' || categoria == 'R'){
        cout << "O novo salário do " << nome << " é de: " << salario*1.25;
    }else if(categoria == 'L' || categoria == 'M' || categoria == 'N' || categoria == 'O' || categoria == 'P' || categoria == 'S'){
        cout << "O novo salário do " << nome << " é de: " << salario*1.35;
    }else if(categoria == 'U' || categoria == 'V' || categoria == 'X' || categoria == 'Z' || categoria == 'W'){
         cout << "O novo salário do " << nome << " é de: " << salario*1.50;
    }


}
