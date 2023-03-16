#include<iostream>
#include<cstdio>
#include<cstdlib>

using namespace std;
/*
3 – Um posto está vendendo combustíveis com base na tabela de descontos abaixo. Escreva um

algoritmo que leia o número de litros vendidos, o tipo de combustível (codificado da seguinte forma: A-
álcool G-Gasolina), calcule e imprima o valor a ser pago pelo cliente, sabendo-se que o preço da gasolina
é de R$ 2.590 o litro e o álcool R$ 1.650.
Combustível Litros abastecidos Desconto
Gasolina Até 15 litros 3.5%
Acima de 15 litros 6%
Álcool Até 20 litros 3%
Acima de 20 litros 5%
*/

main()
{
 int litros;
 char tipo;
 float preco;

    cout << "Quantos litros de combustivel? ";
    cin >> litros;
    fflush(stdin);

    cout << "Qual o tipo de combustivel: \n A-álcool \n G-Gasolina \n*EM LETRA MAIUSCULA ";
    cin >> tipo;
    fflush(stdin);

    switch(tipo){
    case 'A':
        preco = (litros <= 20) ? litros * 1.65 * 0.97 : litros * 1.65 * 0.95;
        cout << preco;
        break;
    case 'G':
        if(litros <=15){
            preco = (litros*2.590)*0.965;
        }else{
            preco = (litros*2.590)*0.94;
        }
        cout << preco;
        break;
    default:
        cout << "Combustivel invalido.";
        break;
    }

}
