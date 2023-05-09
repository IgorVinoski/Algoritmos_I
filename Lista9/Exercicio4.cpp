#include<iostream>

#include<cstdio>

#include<cstdlib>

using namespace std;

/*
4 - Faça um programa que receba a idade e o peso de 5 pessoas. O programa deve calcular e
mostrar o valor médio de idade e o valor médio de peso das pessoas da mesma faixa etária.
As faixas etárias são: de 1 a 20 anos e de 21 anos para cima.
*/
main()
{
    int idade;
    float peso;
    int somaIdade = 0;
    float somaPesoFaixa1 =0;
    int quantidadePessoasFaixa1=0;
        int quantidadePessoasFaixa2=0;
            float somaPesoFaixa2 =0;


    for(int i =0;i<=5;i++){
        cout << "Informe o pesso da pessoa: " << endl;
        cin >> peso;
        cout << "Inform a idade da pessoa: " << endl;
        cin >> idade;
        if(idade>1 && idade<20){
            somaPesoFaixa1+=peso;
            quantidadePessoasFaixa1++;
        }else{
            quantidadePessoasFaixa2++;
            somaPesoFaixa2+=peso;
        }

        somaIdade+=idade;

    }
    float mediaIdade = somaIdade/5;
    cout << "A media de idade e: " << mediaIdade << endl;
    cout << "A media de peso da faixa etaria 1: " << somaPesoFaixa1/quantidadePessoasFaixa1<<endl;
    cout << "A media de peso da faixa etaria 2: "<< somaPesoFaixa2/quantidadePessoasFaixa2 << endl;
}

