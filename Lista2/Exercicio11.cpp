#include<iostream>

#include<cstdio>

#include<cstdlib>

using namespace std;
/*
Uma locadora de carros precisa da sua ajuda para cobrar seus serviços. Escreva um programa que
pergunte a quantidade de Km percorridos por um carro alugado e a quantidade de dias pelos quais
ele foi alugado. Calcule o preço total a pagar, sabendo que o carro custa R$90 por dia e R$0,20 por
Km rodado.
*/

main()
{
    float quant_km;
    int dias;

    float valor;

    cout << "Digite a quantidade de quilometros rodados: ";
    cin >> quant_km;

    cout << "Digite a quantidae de dias: ";
    cin >> dias;


    valor = (quant_km*0.20) + (90*dias);

    cout << "O valor é de: " << valor << " dinheiros";
}
