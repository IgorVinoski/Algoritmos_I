#include<iostream>

#include<cstdio>

#include<cstdlib>

using namespace std;


main()
{
/*
8 - Fa�a um algoritmo que leia o c�digo do produto, a quantidade em estoque, o pre�o de custo e o tipo (S � servi�o,
P - produto). Com base na quantidade de produtos em estoque (Qt. Estoque) e pre�o de custo (Pre�o Custo), o
programa deve calcular e mostrar o valor do total de produtos em estoque (Valor Estoque), e tamb�m o pre�o de venda
com base nas seguintes informa��es:
*/

int cod_produto, quant_estoque;
float preco_custo, valor_estoque, preco_venda;
char tipo_servico;


    cout << "Informe o codigo do produto" << endl;
    cin >> cod_produto;
    cout << "Informe a quantidade em estoque" << endl;
    cin >> quant_estoque;
    cout << "Informe o preco de custo" << endl;
    cin >> preco_custo;
    cout << "Informe o tipo: \n Servico - S \n Produto P" << endl;
    valor_estoque = quant_estoque*preco_custo;
    if(cod_produto=='P'){
        preco_venda = preco_custo*1.9;
    }else{
        preco_venda = preco_custo*1.6;
    }
    cout << "O preco de venda e: " << preco_venda << endl;
}
