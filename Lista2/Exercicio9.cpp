#include<iostream>

#include<cstdio>

#include<cstdlib>

using namespace std;

/*
O custo ao consumidor de um carro novo é a soma do custo de fábrica com a percentagem do
distribuidor e dos impostos (aplicados ao custo de fábrica). Supondo que a percentagem do
distribuidor seja de 28% e os impostos de 45%, escrever um algoritmo que leia o custo de fábrica
de um carro e escreva o custo ao consumidor.

*/
main()
{
    float custo_fabrica;

    cout << "Informe o custo de fábrica do veículo: \t";
    cin >> custo_fabrica;

    float custo_consumidor = custo_fabrica + custo_fabrica*73/100;

    cout << "O custo para o consumidor é de: " << custo_consumidor << " dinheiros";
}
