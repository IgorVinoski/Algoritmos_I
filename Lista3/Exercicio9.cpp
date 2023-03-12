#include<iostream>

#include<cstdio>

#include<cstdlib>

using namespace std;
/*
    9 – Escreva um programa que receba o valor bruto do salário de um funcionário e o valor da prestação
de um empréstimo, em seguida o sistema deverá calcular o percentual que esta prestação representa
no salário bruto e caso o percentual for menor ou igual à 25% do salário a consignação será concedida,
caso contrário deverá exibir mensagem dizendo que o valor da prestação é maior que o permitido.
*/

main()
{
    float salario, prest_emprest;
    cout << "Informe o salario: ";
    cin >> salario;

    cout << "Informe o valor da prestação do emprestimo: ";
    cin >> prest_emprest;

    if(prest_emprest/salario *100 <= 25){
        cout << "Concedido";
    }else{
        cout << "Não concedido. ";
    }
}
